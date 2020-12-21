#include "GestoreArticoli.h"

bool GestoreArticoli::aggiungiArticolo(int i, int n, QString t, QList<Autore> a, QList<QString> k, float p, QList<QString> aC){
    Articolo A(i,n,t,a,k,p,aC);
    for (auto a: articoli)
        if (a.getId() == A.getId())
            return false;
    articoli.push_back(A);
    return true;
}
