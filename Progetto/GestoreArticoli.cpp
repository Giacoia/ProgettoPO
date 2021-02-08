/*
This file is part of ProgettoPO.

ProgettoPO is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

ProgettoPO is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with ProgettoPO.  If not, see <http://www.gnu.org/licenses/>.
*/

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

const QList<Articolo> GestoreArticoli::articoliMembriDiUnaStruttura(const QString& aff) const {
    QList<Articolo> articoliMembriStruttura;
    int giaInserito = 0;
    for (auto art: articoli){
        const QList<Autore>& autori = art.getAutoriInseriti();
        for (auto aut: autori){
            const QList<QString> afferenze = aut.getAfferenze();
            for (auto a: afferenze){
                if (a == aff){
                    articoliMembriStruttura.push_back(art);
                    giaInserito++;
                }
            }
            if (giaInserito > 0)
                break;
        }
        giaInserito = 0;
    }
    return articoliMembriStruttura;
}

const QList<Articolo> GestoreArticoli::articoliAutorePrezzoPiuBasso(int i) const {
    QList<Articolo> articoliEconomici;
    float min = FLT_MAX;
    for (auto art: articoli){
        QList<Autore> autori = art.getAutoriInseriti();
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

const QList<QString> GestoreArticoli::keywordGuadagnoPiuAlto() const {
    QList<QString> keyword;
    QList<QString> keywordGuadagnoMaggiore;
    for (auto art: articoli){
        const QList<QString>& keywordDisponibili = art.getKeyword();
        for (auto k: keywordDisponibili)
        keywordPresenti(keyword, k);
    }
    float max = FLT_MIN;
    QVector<float> prezzi;
    for (auto k: keyword){
        float prezzo = 0.0;
        for (auto art: articoli){
            const QList<QString>& keywordDisponibili = art.getKeyword();
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

const QList<Articolo> GestoreArticoli::articoliAutoreOrdinatiPrezzo(int i) const {
    QList<Articolo> articoliAutore;
    for (auto art: articoli){
        const QList<Autore>& autori = art.getAutoriInseriti();
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
        const QList<QString>& afferenze = a.getAfferenze();
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
        }
    }
    return strutture;
}

const QList<QString> GestoreArticoli::strutturePiuProduttive(const QList<Autore>& autori) const {
    QList<QString> strutture = getStrutture(autori);
    QVector<int> produzione;
    int max = INT_MIN;
    for (auto s: strutture){
        int prod = 0;
        for (auto art: articoli){
            int cont = 0;
            const QList<Autore>& autori = art.getAutoriInseriti();
            for (auto a: autori){
                const QList<QString>& afferenze = a.getAfferenze();
                for (auto aff: afferenze){
                    if (aff == s){
                        prod++;
                        cont++;
                        break;
                    }
                }
                if (cont > 0)
                    break;
            }
        }
        produzione.push_back(prod);
        if (prod > max)
            max = prod;
    }
    QList<QString> struttureMigliori;
    for (int i = 0; i < produzione.size(); i++){
        if (produzione[i] == max)
            struttureMigliori.push_back(strutture[i]);
    }
    return struttureMigliori;
}



