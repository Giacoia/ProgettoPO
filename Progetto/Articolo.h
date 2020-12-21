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
    Articolo(int i, int n, QString t, QList<Autore> a, QList<QString> k, float p, QList<QString> aC): id(i), numPagine(n), titolo(t), autori(a), keywords(k), prezzo(p), art_correlati(aC) {}

    int getId() const { return id; }
    void setId(int i) { id = i; }

    int getNumPagine() const { return numPagine; }
    void setNumPagine(int n) { numPagine = n; }

    QString getTitolo() const { return titolo; }
    void setTitolo(QString t) { titolo = t; }

    float getPrezzo() const { return prezzo; }
    void setPrezzo(float p) { prezzo = p; }

    const QList<QString>& keyword() { return keywords; }
    const QList<QString>& artCorrelati() { return art_correlati; }

private:
    int id;
    int numPagine;
    QString titolo;
    QList<Autore> autori;
    QList<QString> keywords;
    float prezzo;
    QList<QString> art_correlati;

};

#endif // ARTICOLO_H
