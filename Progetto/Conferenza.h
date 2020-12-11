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

#ifndef CONFERENZA_H
#define CONFERENZA_H

#include <QMainWindow>

class Conferenza
{
private:
    QString nome;
    QString acronimo;
    QString luogo;
    QString organizzatori;
    int data;
    int numPartecipanti;
public:
    QString getNome() const { return nome; }
    void setNome(QString n) { nome = n; }

    QString getAcronimo() const { return acronimo; }
    void setAcronimo(QString a) { acronimo = a; }

    QString getLuogo() const { return luogo; }
    void setLuogo(QString l) { luogo = l; }

    QString getOrganizzatori() const { return organizzatori; }
    void setOrganizzatori(QString o) { organizzatori = o; }

    int getData() const { return data; }
    void setData(int d) { data = d; }

    int getNumPartecipanti() const { return numPartecipanti; }
    void setNumPartecipanti(int n) { numPartecipanti = n; }
};

#endif // CONFERENZA_H
