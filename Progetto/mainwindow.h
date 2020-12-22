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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "GestoreAutori.h"
#include "GestoreArticoli.h"
#include "GestorePubblicazioni.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_aggiungiAfferenza_clicked();

    void on_inserisciAutore_clicked();

    void on_aggiungiAutore_clicked();

    void on_backToHome();

    void on_visualizzaAutori_clicked();

    void on_inserisciArticolo_clicked();

    void on_inserisciRivista_clicked();

    void on_aggiungiRivista_clicked();

    void on_inserisciConferenza_clicked();

    void on_aggiungiOrganizzatore_clicked();

    void on_aggiungiConferenza_clicked();

private:
    QList<Articolo> articoli;
    QList<QString> generica;
    GestoreAutori gestoreAutori;
    GestorePubblicazioni gestPubblicazioni;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
