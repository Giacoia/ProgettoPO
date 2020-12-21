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

#ifndef RIVISTA_H
#define RIVISTA_H

#include <QMainWindow>
#include "Pubblicazioni.h"

class Rivista: Pubblicazioni {

public:
    Rivista(QString n, QString a, QString d, QString e, int v): Pubblicazioni(n,a,d), editore(e), volume(v) {}

    QString getEditore() const { return editore; }
    void setEditore(QString e) { editore = e; }

    int getVolume() const {return volume; }
    void setVolume(int v) { volume = v; }

private:
    QString editore;
    int volume;
};

#endif // RIVISTA_H
