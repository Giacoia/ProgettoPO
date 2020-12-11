#ifndef GESTORELISTE_H
#define GESTORELISTE_H

#include "Autore.h"
#include "Conferenza.h"
#include "Rivista.h"

class GestoreListe{
private:
    QList<Autore> autori;
    QList<Conferenza> conferenze;
    QList<Rivista> riviste;
public:
    bool aggiungiAutori(Autore);
    bool aggiungiConferenza(Conferenza);
    bool aggiungiRivista(Rivista);
};

#endif // GESTORELISTE_H
