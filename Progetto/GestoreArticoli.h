#ifndef GESTOREARTICOLI_H
#define GESTOREARTICOLI_H

#include "Articolo.h"

class GestoreArticoli{

public:
    bool aggiungiArticolo(int , int, QString, QList<Autore>, QList<QString>, float, QList<QString>, QString);

    const QList<Articolo>& autore() const { return articoli; }

private:
    QList<Articolo> articoli;
};

#endif // GESTOREARTICOLI_H
