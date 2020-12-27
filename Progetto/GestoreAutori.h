#ifndef GESTORE_H
#define GESTORE_H

#include "Autore.h"

class GestoreAutori{
public:
    bool aggiungiAutore(int, QString, QString, QList<QString>);
    bool isPresente(int,QVector<int>&);
    QList<Autore> autoriArticolo(const QVector<int>&);

    const QList<Autore>& autore() const { return autori; }
private:
    QList<Autore> autori;
};

#endif // GESTORE_H
