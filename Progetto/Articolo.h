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

#ifndef ARTICOLO_H
#define ARTICOLO_H

#include <QMainWindow>
#include "Autore.h"

class Articolo{

public:
    Articolo(int i, int n, QString t, QList<Autore> a, QList<QString> k, float p, QList<QString> aC, QString pI): id(i), numPagine(n), titolo(t), autori(a), keyword(k), prezzo(p), art_correlati(aC), pubblicatoPer(pI) {}

    int getId() const { return id; }
    void setId(int i) { id = i; }

    int getNumPagine() const { return numPagine; }
    void setNumPagine(int n) { numPagine = n; }

    QString getTitolo() const { return titolo; }
    void setTitolo(QString t) { titolo = t; }

    float getPrezzo() const { return prezzo; }
    void setPrezzo(float p) { prezzo = p; }

    QString getPubblicatoPer() const { return pubblicatoPer; }

    friend ostream& operator<<(ostream& o, const Articolo& a){
        o << "ID ARTICOLO: " << a.id << " - PAGINE: " << a.numPagine << " - TITOLO: " << a.titolo.toStdString() << " - PREZZO: " << a.prezzo << " - PUBBLICATO PER: " << a.pubblicatoPer.toStdString() << endl;
        if (a.autori.size() == 1)
            o << "AUTORE: ";
        else
            o << "AUTORI: ";

        for (auto aut: a.autori){
            o << aut << endl;
        }
        o << "KEYWORD: ";
        for (auto k : a.keyword){
            if (k == a.keyword.back())
                o << k.toStdString() << "." << endl;
            else
                o << k.toStdString() << ", ";
        }
        if (a.art_correlati.empty())
            cout << "NON SONO PRESENTI ARTICOLI CORRELATI";

        if (a.art_correlati.size() == 1)
            o << "ARTICOLO CORRELATO: ";
        else
            o << "ARTICOLI CORRELATI: ";

        for (auto art: a.art_correlati){
            if (art == a.art_correlati.back())
                o << art.toStdString() << ".";
            else
                o << art.toStdString() << ", ";
        }
        o << endl;
        return o;
    }

    const QList<QString>& Keyword() { return keyword; }
    const QList<QString>& artCorrelati() { return art_correlati; }
    const QList<Autore> autoriInseriti() { return autori; }

private:
    int id;
    int numPagine;
    QString titolo;
    QList<Autore> autori;
    QList<QString> keyword;
    float prezzo;
    QList<QString> art_correlati;
    QString pubblicatoPer;
};

#endif // ARTICOLO_H
