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

#ifndef AUTORE_H
#define AUTORE_H

#include<QMainWindow>
#include <iostream>
using namespace std;

class Autore {

public:
    Autore(int i, QString n, QString c, QList<QString> a): id(i), nome(n), cognome(c), afferenze(a) {}

    QString getNome() const { return nome; }
    void setNome(QString n) { nome = n; }

    QString getCognome() const { return cognome; }
    void setCognome(QString c) { cognome = c; }

    int getId() const { return id; }
    void setId(int i) { id = i; }

    const QList<QString>& getAfferenze() const { return afferenze; }

    friend ostream& operator<<(ostream& o, const Autore& a){
        o << "ID: " << a.id << " - NOME: " << a.nome.toStdString() << " - COGNOME: " << a.cognome.toStdString();
        if (a.afferenze.size() == 1)
            o << " - AFFERENZA: ";
        else
            o << " - AFFERENZE: ";
        for (auto aff: a.afferenze){
            if (aff == a.afferenze.back()){
                o << aff.toStdString() << ".";
                return o;
            }
            o << aff.toStdString() << ", ";
        }
        return o;
    }

private:
    int id;
    QString nome;
    QString cognome;
    QList<QString> afferenze;
};

#endif // AUTORE_H
