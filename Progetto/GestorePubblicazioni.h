#ifndef GESTOREPUBBLICAZIONI_H
#define GESTOREPUBBLICAZIONI_H

#include "Conferenza.h"
#include "Rivista.h"
#include "Articolo.h"

class GestorePubblicazioni{
public:
    bool aggiungiConferenza(QString, QString, QString, QList<Articolo>, QList<QString>, QString, int);
    bool aggiungiRivista(QString, QString, QString, QList<Articolo>, QString, int);

    const QList<Pubblicazioni*>& allPubblicazioni() const { return pubblicazioni; }

    void aggiungiArticoloAPubblicazione(QString, QString, Articolo&);

    QList<Articolo> articoliAutoreInUnAnno(Autore, QString);
private:
    QList<Pubblicazioni*> pubblicazioni;
};

#endif // GESTOREPUBBLICAZIONI_H
