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

class Autore {
private:
    int id;
    QString nome;
    QString cognome;
    QList<QString> afferenza;
public:
    QString getNome() { return nome; }
    QString getCognome() { return cognome; }
    int getId() { return id; }
    void aggiungiAfferenza(QString a){
        for (auto it = afferenza.begin(); it != afferenza.end(); it++){
            QString afferenza = *it;
            if (afferenza == a)
                return;
        }
        afferenza.push_back(a);
    }
};

#endif // AUTORE_H
