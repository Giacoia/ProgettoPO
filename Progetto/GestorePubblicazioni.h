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

    const QList<Pubblicazioni*>& allPubblicazioni() const { return pubblicazioni; }

    void aggiungiArticoloAPubblicazione(QString, Articolo&);
    bool EsistePubblicazione(QString, QString);

    QList<Articolo> articoliAutoreInUnAnno(int, QString);
    float guadagnoAnnualeConferenza(QString,QString);
    QList<Articolo> articoliRelativiKeyword(QString k);

    void svuota();

    ~GestorePubblicazioni();
    GestorePubblicazioni(const GestorePubblicazioni&);
    GestorePubblicazioni& operator=(const GestorePubblicazioni&);
private:
    QList<Pubblicazioni*> pubblicazioni;
};

#endif // GESTOREPUBBLICAZIONI_H
