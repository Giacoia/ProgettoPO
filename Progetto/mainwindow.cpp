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
    ui->push_autore->setToolTip("Inserisce l'autore nella lista");
    connect (ui->back_home, &QPushButton::clicked, this, &MainWindow::on_back_home_clicked);
    connect (ui->back_home_2, &QPushButton::clicked, this, &MainWindow::on_back_home_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pag_autore_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->aggiungiAutore);
}

void MainWindow::on_push_autore_clicked()
{
    int id = ui->edit_idAutore->text().toInt();
    QString nome = ui->edit_nomeAutore->text();
    QString cognome = ui->edit_cognomeAutore->text();
    QString afferenza = ui->edit_afferenza->toPlainText();
    if (nome.isEmpty() || cognome.isEmpty() || afferenza.isEmpty()){
        QMessageBox mess(QMessageBox::Warning,"Attenzione","riempire eventuali campi vuoti",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    Autore A(id,nome,cognome,afferenza);
    if(gestore.aggiungiAutori(A)){
        ui->lista_autori->addItem("Id: " + ui->edit_idAutore->text() + " -- Nome: " + nome);
        QMessageBox::information(this,"Titolo","Autore inserito con successo");
    }
    else if(!gestore.aggiungiAutori(A)){
        QMessageBox mess(QMessageBox::Critical,"Attenzione","id già presente",QMessageBox::Ok,this);
        mess.exec();
    }
    ui->edit_nomeAutore->clear();
    ui->edit_cognomeAutore->clear();
    ui->edit_afferenza->clear();
}

void MainWindow::on_back_home_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home);
}

void MainWindow::on_pag_conferenza_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->aggiungiConferenza);
}
