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
    ui->aggiungiRivista->setToolTip("Aggiunge la rivista alla lista");
    ui->aggiungiConferenza->setToolTip("Aggiunge la conferenza alla lista");
    ui->selezionaAutori->setToolTip("Premi per confermare l'autore");
    connect (ui->backHome, &QPushButton::clicked, this, &MainWindow::on_backToHome);
    connect (ui->backHome_2, &QPushButton::clicked, this, &MainWindow::on_backToHome);
    connect (ui->backHome_3, &QPushButton::clicked, this, &MainWindow::on_backToHome);
    connect (ui->backHome_4, &QPushButton::clicked, this, &MainWindow::on_backToHome);
    connect (ui->backHome_5, &QPushButton::clicked, this, &MainWindow::on_backToHome);
    connect (ui->backHome_6, &QPushButton::clicked, this, &MainWindow::on_backToHome);
    connect (ui->backHome_7, &QPushButton::clicked, this, &MainWindow::on_backToHome);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_backToHome()
{
    ui->stackedWidget->setCurrentWidget(ui->homePage);
}

void MainWindow::on_inserisciAutore_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->aggiungiAutorePage);
}

void MainWindow::on_aggiungiAfferenza_clicked()
{
    QString aff = ui->afferenzaText->toPlainText();
    if (aff.isEmpty()){
        QMessageBox::critical(this,"Campo vuoto","Inserire un'afferenza!",QMessageBox::Ok);
        return;
    }
    for (auto a: generica){
        if (a == aff){
            QMessageBox::critical(this,"Afferenze","Afferenza già presente!",QMessageBox::Ok);
            return;
        }
    }
    generica.push_back(aff);
    ui->afferenzaText->clear();
}

void MainWindow::on_aggiungiAutore_clicked()
{
    int id = ui->idAutoreBox->text().toInt();
    QString nome = ui->nomeAutoreText->text();
    QString cognome = ui->cognomeText->text();
    if (nome.isEmpty() || cognome.isEmpty() || generica.isEmpty()){
        QMessageBox::critical(this,"Campo vuoto","Riempire eventuali campi vuoti!",QMessageBox::Ok);
        return;
    }
    if (gestoreAutori.aggiungiAutore(id,nome,cognome,generica)){
        ui->listAutori->addItem("ID: " + ui->idAutoreBox->text() + " - NOME: " + nome + " - COGNOME: " + cognome);
        ui->statusBar->showMessage("Autore inserito con successo!", 3000);
    }
    else{
        QMessageBox::critical(this,"Errore","Autore già presente!",QMessageBox::Ok);
    }
    ui->nomeAutoreText->clear();
    ui->cognomeText->clear();
    generica.clear();
    ui->idAutoreBox->setValue(0);
}

void MainWindow::on_visualizzaAutori_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->VisualizzaAutoriPage);
    const QList<Autore>& autori = gestoreAutori.autore();
    ui->listAutoriCompleta->clear();
    for (auto a: autori){
        stringstream s;
        s << a;
        ui->listAutoriCompleta->addItem(QString::fromStdString(s.str()));
    }
}

void MainWindow::on_inserisciConferenza_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->aggiungiConferenzaPage);
}

void MainWindow::on_aggiungiOrganizzatore_clicked()
{
    QString org = ui->organizzatoreText->text();
    if (org.isEmpty()){
        QMessageBox::critical(this,"Campo vuoto","Inserire un organizzatore!",QMessageBox::Ok);
        return;
    }
    for (auto a: generica){
        if (a == org){
            QMessageBox::critical(this,"Organizzatori","Organizzatore già presente!",QMessageBox::Ok);
            return;
        }
    }
    generica.push_back(org);
    ui->organizzatoreText->clear();
}

void MainWindow::on_aggiungiConferenza_clicked()
{
    QString n = ui->nomeConfText->text();
    QString a = ui->acronimoConfText->text();
    QString l = ui->luogoText->text();
    QDate data = ui->calendarioConferenza->selectedDate();
    QString d = data.toString(Qt::DateFormat::ISODate);
    int nP = ui->numPartecipantiBox->text().toInt();

    if (n.isEmpty() || a.isEmpty() || generica.isEmpty() || nP == 0){
        QMessageBox::critical(this,"Campo vuoto","Riempire eventuali campi vuoti o aggiungere almeno un organizzatore!",QMessageBox::Ok);
        return;
    }
    if (gestPubblicazioni.aggiungiConferenza(n,a,d,articoli,generica,l, nP)){
        ui->listConferenza->addItem("NOME: " + n + " - DATA: " + d);
        ui->statusBar->showMessage("Conferenza inserita con successo!", 3000);
    }
    else{
        QMessageBox::critical(this,"Errore","Conferenza già presente!",QMessageBox::Ok);
    }
    ui->nomeConfText->clear();
    ui->acronimoConfText->clear();
    ui->luogoText->clear();
    ui->numPartecipantiBox->setValue(0);
    generica.clear();
}

void MainWindow::on_inserisciRivista_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->aggiungiRivistaPage);
}


void MainWindow::on_aggiungiRivista_clicked()
{
    QString n = ui->nomeRivistaText->text();
    QString a = ui->acronimoRivistaText->text();
    QString e = ui->editoreText->text();
    QDate data = ui->calendarioRivista->selectedDate();
    QString d = data.toString(Qt::DateFormat::ISODate);
    int v = ui->volumeBox->text().toInt();

    if (n.isEmpty() || a.isEmpty() || e.isEmpty() || d.isEmpty()){
        QMessageBox::critical(this,"Campo vuoto","Riempire eventuali campi vuoti!",QMessageBox::Ok);
        return;
    }

    if (gestPubblicazioni.aggiungiRivista(n,a,e,articoli,d,v)){
        ui->listRiviste->addItem("Nome: " + n + " - Data: " + d);
        ui->statusBar->showMessage("Rivista aggiunta con successo!",3000);
    }
    else{
        QMessageBox::critical(this,"Errore","Rivista già presente!",QMessageBox::Ok);
    }
    ui->nomeRivistaText->clear();
    ui->acronimoRivistaText->clear();
    ui->editoreText->clear();
    ui->volumeBox->setValue(0);
}

void MainWindow::on_visualizzaRivisteConferenze_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->visualizzaRivConPage);
    const QList<Pubblicazioni*>& pubblicazioni = gestPubblicazioni.allPubblicazioni();
    ui->listRivConfCompleta->clear();
    for (auto p: pubblicazioni){
        stringstream s;
        s << *p;
        ui->listRivConfCompleta->addItem(QString::fromStdString(s.str()));
    }
}

void MainWindow::on_inserisciArticolo_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->aggiungiArticoloPage);
    const QList<Autore>& autori = gestoreAutori.autore();
    ui->autoriDaScegliere->clear();

    if (autori.empty())
        ui->autoriDaScegliere->addItem("Nessun autore presente, aggiungi prima degli autori");

    for (auto a: autori){
        int i = a.getId();
        QString id = QString::number(i);
        ui->autoriDaScegliere->addItem("Id: " + id + " - Nome: " + a.getNome() + " - Cognome: " + a.getCognome());
    }
}

void MainWindow::on_selezionaAutori_clicked()
{
    int i = ui->autoreArticolo->text().toInt();
    for (auto idAutore : id){
        if (idAutore == i){
            QMessageBox::critical(this,"Errore","Autore già scelto!",QMessageBox::Ok);
            ui->autoreArticolo->setValue(0);
            return;
        }
    }
    if (gestoreAutori.isPresente(i,id)){
        ui->statusBar->showMessage("Autore inserito con successo!",3000);
    }
    else {
        QMessageBox::critical(this,"Errore","Autore non presente nella lista!",QMessageBox::Ok);
        ui->autoreArticolo->setValue(0);
        return;
    }
}

void MainWindow::on_aggiungiArtCorrelati_clicked()
{
    QString artCorr = ui->artCorrelatiText->toPlainText();
    if (artCorr.isEmpty()){
        QMessageBox::critical(this,"Campo vuoto","Inserire un articolo correlato!",QMessageBox::Ok);
        return;
    }
    for (auto a: generica){
        if (a == artCorr){
            QMessageBox::critical(this,"Articolo","Articolo correlato già presente!",QMessageBox::Ok);
            return;
        }
    }
    generica.push_back(artCorr);
    ui->artCorrelatiText->clear();
}

void MainWindow::on_aggiungiKeyword_clicked()
{
    QString kW = ui->keywordText->toPlainText();
    if (kW.isEmpty()){
        QMessageBox::critical(this,"Campo vuoto","Inserire una keyword!",QMessageBox::Ok);
        return;
    }
    for (auto a: keyword){
        if (a == kW){
            QMessageBox::critical(this,"Keyword","keyword già presente!",QMessageBox::Ok);
            return;
        }
    }
    keyword.push_back(kW);
    ui->keywordText->clear();
}

void MainWindow::on_aggiungiArticolo_clicked()
{
    int i = ui->idArticoloBox->text().toInt();
    int nP = ui->numPagineBox->text().toInt();
    QString t = ui->titoloText->text();
    float p = ui->PrezzoBox->text().toFloat();
    QString nR = ui->pubblicatoPerText->text();
    QString dR = ui->dataPubblicazioneText->text();
    if (id.empty() || keyword.isEmpty()){
        QMessageBox::critical(this,"Liste vuote","Non sono presenti autori o non sono state inserite keyword, impossibile procedere!",QMessageBox::Ok);
        return;
    }
    autori = gestoreAutori.autoriArticolo(id);
    if (t.isEmpty() || nP == 0 ||  nR.isEmpty() || dR.isEmpty()){
        QMessageBox::critical(this,"Campo vuoto","Riempire eventuali campi vuoti o contrassegnare una box!",QMessageBox::Ok);
        return;
    }
    Articolo A(i,nP,t,autori,keyword,p,generica,nR);
    if (gestoreArticoli.aggiungiArticolo(A)){
        ui->statusBar->showMessage("Articolo aggiunto con successo!",3000);
    }
    else {
        QMessageBox::critical(this,"Errore","Articolo già presente!",QMessageBox::Ok);
    }
    ui->idUsati->addItem("ID: " + ui->idArticoloBox->text());
    gestPubblicazioni.aggiungiArticoloAPubblicazione(nR,dR,A);
    ui->idArticoloBox->setValue(0);
    ui->numPagineBox->setValue(0);
    ui->titoloText->clear();
    ui->PrezzoBox->setValue(0.0);
    ui->pubblicatoPerText->clear();
    ui->dataPubblicazioneText->clear();
    generica.clear();
    keyword.clear();
    id.clear();
}

void MainWindow::on_visualizzaArticoli_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->visualizzaArticoliPage);
    const QList<Articolo>& art = gestoreArticoli.articolo();
    ui->listArticoliCompleta->clear();
    for (auto a: art){
        stringstream s;
        s << a;
        ui->listArticoliCompleta->addItem(QString::fromStdString(s.str()));
    }
}
