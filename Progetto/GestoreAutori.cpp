#include "GestoreAutori.h"

bool GestoreAutori::aggiungiAutore(int i, QString n, QString c, QList<QString> a){
    Autore A(i,n,c,a);
    for (auto aut: autori){
        if (A.getId() == aut.getId())
            return false;
    }
    autori.push_back(A);
    return true;
}

bool GestoreAutori::isPresente(int i,QVector<int>& ar){
    for (auto a: autori){
        if (a.getId() == i){
            ar.push_back(i);
            return true;
        }
    }
    return false;
}

QList<Autore> GestoreAutori::autoriArticolo(const QVector<int>& i){
    QList<Autore> autoriScelti;
    for (auto a: autori){
        for (auto id: i){
            if (a.getId() == id){
                autoriScelti.push_back(a);
            }
        }
    }
    return autoriScelti;
}


