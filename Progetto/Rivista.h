#ifndef RIVISTA_H
#define RIVISTA_H

#include <QMainWindow>

class Rivista{
private:
    QString nome;
    QString acronimo;
    QString editore;
    QString data;
    int volume;
public:
    QString getNome() const { return nome; }
    void setNome(QString n) { nome = n; }

    QString getAcronimo() const { return acronimo; }
    void setAcronimo(QString a) { acronimo = a; }

    QString getEditore() const { return editore; }
    void setEditore(QString e) { editore = e; }

    QString getData() const { return data; }
    void setData(QString d) { data = d; }

    int getVolume() const { return volume; }
    void setVolume(int v) { volume = v; }
};

#endif // RIVISTA_H
