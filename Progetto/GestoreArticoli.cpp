#include "GestoreArticoli.h"

void GestoreArticoli::aggiungiArticolo(Articolo A){
    articoli.push_back(A);
}
bool GestoreArticoli::isPresente(Articolo A){
    for (auto a: articoli)
        if (a.getId() == A.getId())
            return false;
    return true;
}

QList<Articolo> GestoreArticoli::articoliMembriDiUnaStruttura(QString aff) const {
    QList<Articolo> articoliMembriStruttura;
    for (auto art: articoli){
        const QList<Autore>& autori = art.autoriInseriti();
        for (auto aut: autori){
            const QList<QString> afferenze = aut.allAfferenze();
            for (auto a: afferenze){
                if (a == aff)
                    articoliMembriStruttura.push_back(art);
            }
        }
    }
    return articoliMembriStruttura;
}


QList<Articolo> GestoreArticoli::articoliDiUnaRivista(QString n) const {
    QList<Articolo> articoliRivista;
    for (auto art: articoli){
        if (art.getPubblicatoPer() == n)
            articoliRivista.push_back(art);
    }
    return articoliRivista;
}


QList<Articolo> GestoreArticoli::articoliAutorePrezzoPiuBasso(int i) const {
    QList<Articolo> articoliEconomici;
    float min = FLT_MAX;
    for (auto art: articoli){
        QList<Autore> autori = art.autoriInseriti();
        for (auto aut: autori){
            if (aut.getId() == i){
                if (art.getPrezzo() <= min){
                    min = art.getPrezzo();
                    articoliEconomici.push_back(art);
                }
                break;
            }
        }
    }
    for (auto art: articoliEconomici){
        if (art.getPrezzo() > min)
            articoliEconomici.pop_front();
    }
    return articoliEconomici;
}

void keywordPresenti(QList<QString>& k, QString kW){
    for (auto keyword: k){
        if (keyword == kW)
            return;
    }
    k.push_back(kW);
}

QList<QString> GestoreArticoli::keywordGuadagnoPiuAlto() const {
    QList<QString> keyword;
    QList<QString> keywordGuadagnoMaggiore;
    for (auto art: articoli){
        const QList<QString>& keywordDisponibili = art.Keyword();
        for (auto k: keywordDisponibili)
        keywordPresenti(keyword, k);
    }
    float max = FLT_MIN;
    QVector<float> prezzi;
    for (auto k: keyword){
        float prezzo = 0.0;
        for (auto art: articoli){
            const QList<QString>& keywordDisponibili = art.Keyword();
            for (auto keyword: keywordDisponibili){
                if (k == keyword){
                    prezzo += art.getPrezzo();
                    break;
                }
            }
        }
        prezzi.push_back(prezzo);
        if (prezzo > max)
            max = prezzo;
    }
    for (int i = 0; i < prezzi.size(); i++){
        if (prezzi[i] == max)
            keywordGuadagnoMaggiore.push_back(keyword[i]);
    }
    return keywordGuadagnoMaggiore;
}

bool compare(const Articolo& art1, const Articolo& art2){
    return art1.getPrezzo() < art2.getPrezzo();
}

QList<Articolo> GestoreArticoli::articoliAutoreOrdinatiPrezzo(int i) const {
    QList<Articolo> articoliAutore;
    for (auto art: articoli){
        const QList<Autore>& autori = art.autoriInseriti();
        for (auto aut: autori){
            if (aut.getId() == i)
                articoliAutore.push_back(art);
        }
    }
    qSort(articoliAutore.begin(),articoliAutore.end(), compare);
    return articoliAutore;
}


QList<QString> getStrutture(const QList<Autore>& autori) {
    QList<QString> strutture;
    for (auto a: autori){
        const QList<QString>& afferenze = a.allAfferenze();
        for (auto aff: afferenze){
            int cont = 0;
            for (auto s: strutture){
                if (aff == s){
                    cont++;
                    break;
                }
            }
            if (cont == 0)
                strutture.push_back(aff);
            cont = 0;
        }
    }
    return strutture;
}

QList<QString> GestoreArticoli::strutturePiuProduttive(const QList<Autore>& autori) const {
    QList<QString> strutture = getStrutture(autori);
    QVector<int> produzione;
    int max = INT_MIN;
    for (auto s: strutture){
        int cont = 0;
        for (auto art: articoli){
            const QList<Autore>& autori = art.autoriInseriti();
            for (auto a: autori){
                const QList<QString>& afferenze = a.allAfferenze();
                for (auto aff: afferenze){
                    if (aff == s){
                        cont++;
                        break;
                    }
                }
                if (cont > 0)
                    break;
            }
        }
        produzione.push_back(cont);
        if (cont > max)
            max = cont;
    }
    QList<QString> struttureMigliori;
    for (int i = 0; i < produzione.size(); i++){
        if (produzione[i] == max)
            struttureMigliori.push_back(strutture[i]);
    }
    return struttureMigliori;
}



