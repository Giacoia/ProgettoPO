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

#ifndef GESTOREPUBBLICAZIONI_H
#define GESTOREPUBBLICAZIONI_H

#include "Conferenza.h"
#include "Rivista.h"
#include "Articolo.h"

class GestorePubblicazioni{

public:
    GestorePubblicazioni() {};
    bool aggiungiConferenza(QString, QString, QString, QList<Articolo>, QList<QString>, QString, int);
    bool aggiungiRivista(QString, QString, QString, QList<Articolo>, QString, int);

    const QList<Pubblicazioni*>& getPubblicazioni() const { return pubblicazioni; }

    void aggiungiArticoloAPubblicazione(QString, QString,Articolo&);
    bool EsistePubblicazione(QString, QString) const;

    const QList<Articolo> articoliAutoreInUnAnno(int, QString) const;
    const QList<Articolo> articoliDiUnaRivista(QString,const QList<Pubblicazioni*>&) const;
    float guadagnoAnnualeConferenza(QString,QString) const;
    const QList<Articolo> articoliRelativiKeyword(QString k) const;

    void svuota();

    ~GestorePubblicazioni();
    GestorePubblicazioni(const GestorePubblicazioni&);
    GestorePubblicazioni& operator=(const GestorePubblicazioni&);

private:
    QList<Pubblicazioni*> pubblicazioni;
};

#endif // GESTOREPUBBLICAZIONI_H
