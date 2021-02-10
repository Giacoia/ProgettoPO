/*
This file is part of ProgettoPO.

ProgettoPO is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

ProgettoPO is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with ProgettoPO.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "GestorePubblicazioni.h"

void GestorePubblicazioni::svuota(){
    for (auto p: pubblicazioni){
        delete p;
    }
    pubblicazioni.clear();
}


GestorePubblicazioni::~GestorePubblicazioni(){
    svuota();
}


GestorePubblicazioni::GestorePubblicazioni(const GestorePubblicazioni& gest){
    for (auto p: gest.pubblicazioni){
        pubblicazioni.push_back(p->clone());
    }
}


GestorePubblicazioni& GestorePubblicazioni::operator=(const GestorePubblicazioni& gest){
    if (this != &gest){
        svuota();
        for (auto p: gest.pubblicazioni){
            pubblicazioni.push_back(p->clone());
        }
    }
    return *this;
}


bool GestorePubblicazioni::aggiungiRivista(QString n, QString a, QString e,QList<Articolo> ar, QString d, int v){
    Rivista* A = new Rivista(n,a,d,ar,false,e,v);
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
    Conferenza* A = new Conferenza(n,a,d,ar,true,o,l,nP);
    QString anno = d.mid(0,4);

    for (auto r: pubblicazioni){
        QString y = r->getData().mid(0,4);
        if (anno == y && A->getNome() == r->getNome())
            return false;
    }

    pubblicazioni.push_back(A);
    return true;
}


void GestorePubblicazioni::aggiungiArticoloAPubblicazione(QString n,QString d, Articolo & a){
    for (auto p: pubblicazioni){
        QString anno = p->getData().mid(0,4);
        if (p->getNome() == n && d == anno)
            p->aggiungiArticolo(a);
    }
}


bool GestorePubblicazioni::EsistePubblicazione(QString n, QString d) const{
    for (auto p: pubblicazioni){
        QString data = p->getData().mid(0,4);
        if (p->getNome() == n && data == d){
            return true;
        }
    }
    return false;
}


const QList<Articolo> GestorePubblicazioni::articoliAutoreInUnAnno(int i, QString d) const {
    QList<Articolo> articoliAutore;

    for (auto p: pubblicazioni){
        QString data = p->getData().mid(0,4);
        if (data == d){
            const QList<Articolo>& articoli = p->getArticoliInseriti();
            for (auto ar: articoli){
                const QList<Autore>& autori = ar.getAutoriInseriti();
                for (auto aut: autori){
                    if (aut.getId() == i)
                        articoliAutore.push_back(ar);
                }
            }
        }
    }

    return articoliAutore;
}


const QList<Articolo> GestorePubblicazioni::articoliDiUnaRivista(QString n,const QList<Pubblicazioni*>& p) const {
    QList<Articolo> articoliRivista;

    for (auto pub: p){
        if (pub->getNome() == n && pub->getPubblicatoPer() == false){
            const QList<Articolo>& articoli = pub->getArticoliInseriti();
            for (auto a: articoli){
                articoliRivista.push_back(a);
            }
        }
    }

    return articoliRivista;
}


float GestorePubblicazioni::guadagnoAnnualeConferenza(QString n, QString d) const{
    float guadagnoConferenza = 0.0;

    for (auto p: pubblicazioni){
        QString data = p->getData().mid(0,4);
        if (p->getNome() == n && data == d && p->getPubblicatoPer() == true){
            const QList<Articolo>& articoli = p->getArticoliInseriti();
            for (auto art: articoli)
                guadagnoConferenza+=art.getPrezzo();
            }
        }

    return guadagnoConferenza;
}


const QList<Articolo> GestorePubblicazioni::articoliRelativiKeyword(QString k) const{
    QList<Articolo> articoliKeyword;
    QVector<int> date;

    for (auto p: pubblicazioni){
        const QList<Articolo>& articoli = p->getArticoliInseriti();
        for (auto a: articoli){
            const QList<QString>& keyword = a.getKeyword();
            for (auto key: keyword){
                if (key == k){                                                //mi salvo tutti gli articoli che hanno la keyword k
                    articoliKeyword.push_back(a);
                    int data = p->getData().mid(0,4).toInt();
                    date.push_back(data);                 //mi salvo anche la data di quella pubblicazione, quindi ad ogni keyword è associata una data
                }
            }
        }
    }
    bool swap = true;
    while (swap){
        swap = false;
        for (int i = 0; i < articoliKeyword.size(); i++){
            if (i+1 >= articoliKeyword.size())
                break;
            if (date[i] < date[i+1]){
                swap = true;
                Articolo art = articoliKeyword[i];
                articoliKeyword[i] = articoliKeyword[i+1];      //viene effettuato un doppio swap, sia per gli articoli che per le date
                articoliKeyword[i+1] = art;
                int d = date[i];
                date[i] = date[i+1];
                date[i+1] = d;
            }
            if (date[i] == date[i+1]){
                if (articoliKeyword[i].getPrezzo() > articoliKeyword[i+1].getPrezzo()){
                    swap = true;
                    Articolo art = articoliKeyword[i];
                    articoliKeyword[i] = articoliKeyword[i+1];
                    articoliKeyword[i+1] = art;
                    int d = date[i];
                    date[i] = date[i+1];
                    date[i+1] = d;
                }
                if (articoliKeyword[i].getPrezzo() == articoliKeyword[i+1].getPrezzo()){
                    QString autore1 = articoliKeyword[i].getAutoriInseriti().front().getCognome();
                    QString autore2 = articoliKeyword[i+1].getAutoriInseriti().front().getCognome();
                    if (autore1 > autore2){
                        swap = true;
                        Articolo art = articoliKeyword[i];
                        articoliKeyword[i] = articoliKeyword[i+1];
                        articoliKeyword[i+1] = art;
                        int d = date[i];
                        date[i] = date[i+1];
                        date[i+1] = d;
                    }
                }
            }
        }
    }

    return articoliKeyword;
}







