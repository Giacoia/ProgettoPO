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

#ifndef GESTOREARTICOLI_H
#define GESTOREARTICOLI_H

#include "Articolo.h"
#include "Pubblicazioni.h"
#include <cfloat>

class GestoreArticoli{

public:
    void aggiungiArticolo(Articolo);
    bool isPresente(Articolo);
    const QList<Articolo>& getArticoli() const { return articoli; }

    const QList<Articolo> articoliMembriDiUnaStruttura(const QString&) const;
    const QList<Articolo> articoliAutorePrezzoPiuBasso(int) const;
    const QList<QString> keywordGuadagnoPiuAlto() const;
    const QList<Articolo> articoliAutoreOrdinatiPrezzo(int) const;
    const QList<QString> strutturePiuProduttive(const QList<Autore>&) const;
private:
    QList<Articolo> articoli;
};

#endif // GESTOREARTICOLI_H
