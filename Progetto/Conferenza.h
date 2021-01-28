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

#include "Pubblicazioni.h"

class Conferenza: public Pubblicazioni{

public:
    Conferenza(QString n, QString a, QString d, QList<Articolo> ar, QList<QString> o, QString l, int nP): Pubblicazioni(n,a,d,ar), organizzatori(o), luogo(l), numPartecipanti(nP) {}

    QString getLuogo() const { return luogo; }
    void setLuogo(QString l) { luogo = l; }

    int getNumPartecipanti() const { return numPartecipanti; }
    void setNumPartecipanti(int n) { numPartecipanti = n; }

    const QList<QString>& allOrganizzatori() const { return organizzatori; }

    friend ostream& operator<<(ostream& o, const Conferenza& conferenza) {
                return conferenza.stampa(o);
            }
    Conferenza* clone() const {return new Conferenza(*this); }
protected:
    ostream& stampa(ostream& o) const {
        Pubblicazioni::stampa(o) << " - LUOGO: " << luogo.toStdString() << " - PARTECIPANTI: " << numPartecipanti;
        if (organizzatori.size() == 1)
            o << " - ORGANIZZATORE: ";
        else
            o << " - ORGANIZZATORI: ";
        for (auto org: organizzatori){
            if (org == organizzatori.back()){
                o << org.toStdString() << ".";
                return o;
            }
            o << org.toStdString() << ", ";
        }
        return o;
    }
private:
    QString luogo;
    QList<QString> organizzatori;
    int numPartecipanti;
};

#endif // CONFERENZA_H
