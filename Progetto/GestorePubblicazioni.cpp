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

bool GestorePubblicazioni::aggiungiArticoloAPubblicazione(QString n, QString d, Articolo & a){
    for (auto p: pubblicazioni){
        QString data = p->getData().mid(0,4);
        if (p->getNome() == n && data == d){
            p->aggiungiArticolo(a);
            return true;
        }
    }
    return false;
}

QList<Articolo> GestorePubblicazioni::articoliAutoreInUnAnno(int i, QString d){
    QList<Articolo> articoliAutore;
    for (auto p: pubblicazioni){
        QString data = p->getData().mid(0,4);
        if (data == d){
            const QList<Articolo>& articoli = p->articoliInseriti();
            for (auto ar: articoli){
                const QList<Autore>& autori = ar.autoriInseriti();
                for (auto aut: autori){
                    if (aut.getId() == i)
                        articoliAutore.push_back(ar);
                }
            }
        }
    }
    return articoliAutore;
}

float GestorePubblicazioni::guadagnoAnnualeConferenza(QString n, QString d){
    float guadagnoConferenza = 0.0;
    for (auto p: pubblicazioni){
        QString data = p->getData().mid(0,4);
        if (p->getNome() == n && data == d){
            QList<Articolo> articoli = p->articoliInseriti();
            for (auto art: articoli)
                guadagnoConferenza+=art.getPrezzo();
            }
        }
    return guadagnoConferenza;
}


