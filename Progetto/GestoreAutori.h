#ifndef GESTORE_H
#define GESTORE_H

#include "Autore.h"

class GestoreAutori{
public:
    bool aggiungiAutore(int i, QString n, QString c, QList<QString> a);
    const QList<Autore>& autore() const { return autori; }
private:
    QList<Autore> autori;
};

#endif // GESTORE_H
