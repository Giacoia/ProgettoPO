#include "GestorePubblicazioni.h"

void GestorePubblicazioni::svuota(){
    for (auto p: pubblicazioni){
        delete p;
    }
    pubblicazioni.clear();
}

GestorePubblicazioni::~GestorePubblicazioni(){
    for (auto p: pubblicazioni)
        delete p;
    pubblicazioni.clear();
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

void GestorePubblicazioni::aggiungiArticoloAPubblicazione(QString n, Articolo & a){
    for (auto p: pubblicazioni)
        if (p->getNome() == n)
            p->aggiungiArticolo(a);
}

bool GestorePubblicazioni::EsistePubblicazione(QString n, QString d){
    for (auto p: pubblicazioni){
        QString data = p->getData().mid(0,4);
        if (p->getNome() == n && data == d){
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


QList<Articolo> GestorePubblicazioni::articoliRelativiKeyword(QString k){
    QList<Articolo> articoliKeyword;
    QVector<int> date;
    for (auto p: pubblicazioni){
        const QList<Articolo>& articoli = p->articoliInseriti();
        for (auto a: articoli){
            const QList<QString>& keyword = a.Keyword();
            for (auto key: keyword){
                if (key == k){
                    articoliKeyword.push_back(a);
                    int data = p->getData().mid(0,4).toInt();
                    date.push_back(data);
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
                articoliKeyword[i] = articoliKeyword[i+1];
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
                    QString autore1 = articoliKeyword[i].autoriInseriti().front().getCognome();
                    QString autore2 = articoliKeyword[i+1].autoriInseriti().front().getCognome();
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







