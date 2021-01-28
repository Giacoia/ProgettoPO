#ifndef GESTOREARTICOLI_H
#define GESTOREARTICOLI_H

#include "Articolo.h"
#include "Pubblicazioni.h"
#include <cfloat>

class GestoreArticoli{

public:
    void aggiungiArticolo(Articolo);
    bool isPresente(Articolo);
    const QList<Articolo>& articolo() const { return articoli; }

    QList<Articolo> articoliMembriDiUnaStruttura(QString) const;
    QList<Articolo> articoliDiUnaRivista(QString) const;
    QList<Articolo> articoliAutorePrezzoPiuBasso(int) const;
    QList<QString> keywordGuadagnoPiuAlto() const;
    QList<Articolo> articoliAutoreOrdinatiPrezzo(int) const;
    QList<QString> strutturePiuProduttive(const QList<Autore>&) const;
private:
    QList<Articolo> articoli;
};

#endif // GESTOREARTICOLI_H
