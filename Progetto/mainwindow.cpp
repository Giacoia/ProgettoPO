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

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->aggiungiAutore->setToolTip("Aggiunge l'autore alla lista");
    connect (ui->backHome, &QPushButton::clicked, this, &MainWindow::on_backToHome);
    connect (ui->backHome_2, &QPushButton::clicked, this, &MainWindow::on_backToHome);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_aggiungiAfferenza_clicked()
{
    QString aff = ui->afferenzaText->toPlainText();
    if (aff.isEmpty()){
        QMessageBox::critical(this,"Campo vuoto","Inserire un'afferenza!",QMessageBox::Ok);
        return;
    }
    for (auto a: afferenze){
        if (a == aff){
            QMessageBox::critical(this,"Afferenza","Afferenza già presente!",QMessageBox::Ok);
            return;
        }
    }
    afferenze.push_back(aff);
    ui->afferenzaText->clear();
}

void MainWindow::on_inserisciAutore_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->aggiungiAutorePage);
}

void MainWindow::on_aggiungiAutore_clicked()
{
    int id = ui->idAutoreBox->text().toInt();
    QString nome = ui->nomeAutoreText->text();
    QString cognome = ui->cognomeText->text();
    if (nome.isEmpty() || cognome.isEmpty() || afferenze.isEmpty()){
        QMessageBox::critical(this,"Campo vuoto","Riempire eventuali campi vuoti!",QMessageBox::Ok);
        return;
    }
    if (gestore.aggiungiAutore(id,nome,cognome,afferenze)){
        ui->listAutori->addItem("Id: " + ui->idAutoreBox->text() + " - Nome: " + nome + " - Cognome: " + cognome);
        ui->statusBar->showMessage("Autore inserito con successo!", 3000);
    }
    else{
        QMessageBox::critical(this,"Errore","Autore già presente!",QMessageBox::Ok);
    }
    ui->nomeAutoreText->clear();
    ui->cognomeText->clear();
    afferenze.clear();
}

void MainWindow::on_backToHome()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

void MainWindow::on_VisualizzaAutori_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->VisualizzaAutoriPage);
    const QList<Autore>& autori = gestore.autore();
    ui->listAutoriCompleta->clear();
    for (auto a: autori){
        const QList<QString>& afferenza = a.allAfferenze();
        QString allAff;
        for (auto it = afferenza.begin(); it != afferenza.end(); it++){
            if (it == afferenza.end()-1)
                allAff += *it + ".";
            else
                allAff += *it + ", ";
        }
        int i = a.getId();
        QString id = QString::number(i);
        ui->listAutoriCompleta->addItem("Id: " + id + " - Nome: " + a.getNome() + " - Cognome: " + a.getCognome() + " - Afferenze/a: " + allAff);
    }
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->AggiungiArticoloPage);
    const QList<Autore>& autori = gestore.autore();
    ui->autoriDaScegliere->clear();
    for (auto a: autori){
        int i = a.getId();
        QString id = QString::number(i);
        ui->autoriDaScegliere->addItem("Id: " + id + " - Nome: " + a.getNome() + " - Cognome: " + a.getCognome());
    }
}
