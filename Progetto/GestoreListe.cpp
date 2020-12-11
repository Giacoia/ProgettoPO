#include "GestoreListe.h"

bool GestoreListe::aggiungiAutori(Autore a)
{
    for (auto au: autori)
        if (au.getId() == a.getId())
            return false;
    autori.push_back(a);
    return true;
}

bool GestoreListe::aggiungiConferenza(Conferenza c)
{
    for (auto conf: conferenze)
        if (conf.getNome() == c.getNome())
            return false;
    conferenze.push_back(c);
    return true;
}

bool GestoreListe::aggiungiRivista(Rivista r)
{
    for (auto riv: riviste)
        if (riv.getNome() == r.getNome())
            return false;
    riviste.push_back(r);
    return true;
}
