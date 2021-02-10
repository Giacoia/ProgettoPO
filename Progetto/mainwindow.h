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
#include <sstream>
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

    void on_visualizzaRivisteConferenze_clicked();

    void on_aggiungiArticolo_clicked();

    void on_selezionaAutori_clicked();

    void on_aggiungiArtCorrelati_clicked();

    void on_aggiungiKeyword_clicked();

    void on_visualizzaArticoli_clicked();

    void on_sezioneB_clicked();

    void on_ConfermaDati_clicked();

    void on_rivConfDisponibili_clicked();

    void on_backAggiungiArticolo_clicked();

    void on_ConfermaStruttura_clicked();

    void on_confermaNomeRivista_clicked();

    void on_sezioneC_clicked();

    void on_ConfermaId_clicked();

    void on_ConfermaNomeEAnno_clicked();

    void on_mostraKeyword_clicked();

    void on_sezioneD_clicked();

    void on_ordinaArticoliPerPrezzo_clicked();

    void on_ordinaPerVariCriteri_clicked();

    void on_mostraStrutture_clicked();

    void on_backToSezioneB_clicked();

    void on_backToSezioneC_clicked();

    void on_backToSezioneD_clicked();

private:
    QList<Autore> autori;
    QList<Articolo> articoli;
    QList<QString> generica;                //è una lista utilizzata per memorizzare più di un tipo di oggetto
    QList<QString> keyword;
    QVector<int> id;
    GestoreArticoli gestoreArticoli;
    GestoreAutori gestoreAutori;
    GestorePubblicazioni gestPubblicazioni;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
