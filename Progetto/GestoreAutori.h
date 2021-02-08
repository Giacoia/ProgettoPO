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

#ifndef GESTORE_H
#define GESTORE_H

#include "Autore.h"

class GestoreAutori{
public:
    bool aggiungiAutore(int, QString, QString, QList<QString>);
    bool isPresente(int,QVector<int>&);
    QList<Autore> autoriArticolo(const QVector<int>&);

    const QList<Autore>& getAutori() const { return autori; }
private:
    QList<Autore> autori;
};

#endif // GESTORE_H
