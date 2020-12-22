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

#ifndef PUBBLICAZIONI_H
#define PUBBLICAZIONI_H

#include <QMainWindow>
#include "Articolo.h"

class Pubblicazioni{

public:
    Pubblicazioni(): nome(""),acronimo(""),data("") {}
    Pubblicazioni(QString n, QString a, QString d, QList<Articolo> ar): nome(n), acronimo(a), data(d), articoli(ar) {}
    virtual ~Pubblicazioni() {}

    QString getNome() const { return nome; }
    void setNome(QString n) { nome = n; }

    QString getAcronimo() const { return acronimo; }
    void setAcronimo(QString a) { acronimo = a; }

    QString getData() const { return data; }
    void setData(QString d) { data = d; }

private:
    QString nome;
    QString acronimo;
    QString data;
    QList<Articolo> articoli;
};

#endif // PUBBLICAZIONI_H
