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




