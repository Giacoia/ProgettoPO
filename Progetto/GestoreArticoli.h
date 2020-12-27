#ifndef GESTOREARTICOLI_H
#define GESTOREARTICOLI_H

#include "Articolo.h"

class GestoreArticoli{

public:
    bool aggiungiArticolo(Articolo);

    const QList<Articolo>& articolo() const { return articoli; }

private:
    QList<Articolo> articoli;
};

#endif // GESTOREARTICOLI_H
