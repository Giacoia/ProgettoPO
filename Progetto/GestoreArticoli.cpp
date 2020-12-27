#include "GestoreArticoli.h"

bool GestoreArticoli::aggiungiArticolo(Articolo A){
    for (auto a: articoli)
        if (a.getId() == A.getId())
            return false;
    articoli.push_back(A);
    return true;
}
