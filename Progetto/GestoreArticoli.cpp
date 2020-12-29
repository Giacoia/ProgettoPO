#include "GestoreArticoli.h"

bool GestoreArticoli::aggiungiArticolo(Articolo A){
    for (auto a: articoli)
        if (a.getId() == A.getId())
            return false;
    articoli.push_back(A);
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
