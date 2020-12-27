#include "GestorePubblicazioni.h"

bool GestorePubblicazioni::aggiungiRivista(QString n, QString a, QString e,QList<Articolo> ar, QString d, int v){
    Rivista* A = new Rivista(n,a,d,ar,e,v);
    QString anno = d.mid(0,4);
    for (auto p: pubblicazioni){
        QString y = p->getData().mid(0,4);
        if (anno == y && A->getNome() == p->getNome())
            return false;
    }
   pubblicazioni.push_back(A);
    return true;
}

bool GestorePubblicazioni::aggiungiConferenza(QString n, QString a, QString d, QList<Articolo> ar, QList<QString> o, QString l, int nP){
    Conferenza* A = new Conferenza(n,a,d,ar,o,l,nP);
    QString anno = d.mid(0,4);
    for (auto r: pubblicazioni){
        QString y = r->getData().mid(0,4);
        if (anno == y && A->getNome() == r->getNome())
            return false;
    }
    pubblicazioni.push_back(A);
    return true;
}

void GestorePubblicazioni::aggiungiArticoloAPubblicazione(QString n, QString d, Articolo & a){
    for (auto p: pubblicazioni){
        QString data = p->getData().mid(0,4);
        if (p->getNome() == n && data == d){
            p->aggiungiArticolo(a);
        }
    }
}

x







