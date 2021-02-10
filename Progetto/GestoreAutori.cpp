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

#include "GestoreAutori.h"

bool GestoreAutori::aggiungiAutore(int i, QString n, QString c, QList<QString> a){
    Autore A(i,n,c,a);
    for (auto aut: autori){
        if (A.getId() == aut.getId())
            return false;
    }
    autori.push_back(A);
    return true;
}


bool GestoreAutori::isPresente(int i,QVector<int>& ar) const {
    for (auto a: autori){
        if (a.getId() == i){
            ar.push_back(i);
            return true;
        }
    }
    return false;
}


QList<Autore> GestoreAutori::autoriArticolo(const QVector<int>& i){
    QList<Autore> autoriScelti;
    for (auto a: autori){
        for (auto id: i){
            if (a.getId() == id){
                autoriScelti.push_back(a);
            }
        }
    }
    return autoriScelti;
}


