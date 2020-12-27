/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *homePage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_8;
    QPushButton *inserisciAutore;
    QPushButton *visualizzaAutori;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_11;
    QPushButton *inserisciArticolo;
    QPushButton *visualizzaArticoli;
    QWidget *layoutWidget2;
    QFormLayout *formLayout_6;
    QPushButton *inserisciRivista;
    QPushButton *inserisciConferenza;
    QPushButton *visualizzaRivisteConferenze;
    QWidget *aggiungiAutorePage;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QListWidget *listAutori;
    QPushButton *aggiungiAutore;
    QWidget *layoutWidget4;
    QFormLayout *formLayout;
    QLabel *idAutore;
    QLabel *nomeAutore;
    QLineEdit *nomeAutoreText;
    QLabel *cognome;
    QLineEdit *cognomeText;
    QLabel *afferenza;
    QTextEdit *afferenzaText;
    QPushButton *aggiungiAfferenza;
    QSpinBox *idAutoreBox;
    QPushButton *backHome;
    QWidget *VisualizzaAutoriPage;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *listAutoriCompleta;
    QPushButton *backHome_2;
    QWidget *aggiungiConferenzaPage;
    QCalendarWidget *calendarioConferenza;
    QPushButton *backHome_5;
    QWidget *layoutWidget6;
    QFormLayout *formLayout_5;
    QLabel *nomeConferenza;
    QLineEdit *nomeConfText;
    QLineEdit *acronimoConfText;
    QLabel *luogo;
    QLineEdit *luogoText;
    QLabel *numPartecipanti;
    QSpinBox *numPartecipantiBox;
    QLineEdit *organizzatoreText;
    QPushButton *aggiungiOrganizzatore;
    QLabel *acronimoConferenza;
    QLabel *organizzatore;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listConferenza;
    QPushButton *aggiungiConferenza;
    QWidget *aggiungiRivistaPage;
    QCalendarWidget *calendarioRivista;
    QPushButton *backHome_4;
    QWidget *layoutWidget8;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listRiviste;
    QPushButton *aggiungiRivista;
    QWidget *layoutWidget9;
    QFormLayout *formLayout_2;
    QLabel *nomeRivista;
    QLineEdit *nomeRivistaText;
    QLabel *acronimoRivista;
    QLineEdit *acronimoRivistaText;
    QLabel *editore;
    QLineEdit *editoreText;
    QLabel *volume;
    QSpinBox *volumeBox;
    QWidget *visualizzaRivConPage;
    QWidget *layoutWidget10;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QListWidget *listRivConfCompleta;
    QPushButton *backHome_6;
    QWidget *aggiungiArticoloPage;
    QPushButton *backHome_3;
    QWidget *layoutWidget11;
    QFormLayout *formLayout_3;
    QLabel *idArticolo;
    QSpinBox *idArticoloBox;
    QLabel *titolo;
    QLineEdit *titoloText;
    QLabel *numPagine;
    QSpinBox *numPagineBox;
    QLabel *prezzo;
    QDoubleSpinBox *PrezzoBox;
    QLabel *artCorrelati;
    QTextEdit *artCorrelatiText;
    QPushButton *aggiungiArtCorrelati;
    QLabel *keywords;
    QTextEdit *keywordText;
    QPushButton *aggiungiKeyword;
    QLabel *label_2;
    QLineEdit *pubblicatoPerText;
    QLabel *label_3;
    QLineEdit *dataPubblicazioneText;
    QPushButton *aggiungiArticolo;
    QWidget *layoutWidget12;
    QFormLayout *formLayout_4;
    QLabel *autori;
    QListWidget *autoriDaScegliere;
    QLabel *sceltaId;
    QSpinBox *autoreArticolo;
    QPushButton *selezionaAutori;
    QWidget *widget;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QListWidget *idUsati;
    QWidget *visualizzaArticoliPage;
    QWidget *layoutWidget13;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QListWidget *listArticoliCompleta;
    QPushButton *backHome_7;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(841, 660);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        homePage = new QWidget();
        homePage->setObjectName(QString::fromUtf8("homePage"));
        layoutWidget = new QWidget(homePage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 80, 131, 58));
        verticalLayout_8 = new QVBoxLayout(layoutWidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        inserisciAutore = new QPushButton(layoutWidget);
        inserisciAutore->setObjectName(QString::fromUtf8("inserisciAutore"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        inserisciAutore->setFont(font);

        verticalLayout_8->addWidget(inserisciAutore);

        visualizzaAutori = new QPushButton(layoutWidget);
        visualizzaAutori->setObjectName(QString::fromUtf8("visualizzaAutori"));
        visualizzaAutori->setFont(font);

        verticalLayout_8->addWidget(visualizzaAutori);

        layoutWidget1 = new QWidget(homePage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(620, 80, 139, 58));
        verticalLayout_11 = new QVBoxLayout(layoutWidget1);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        inserisciArticolo = new QPushButton(layoutWidget1);
        inserisciArticolo->setObjectName(QString::fromUtf8("inserisciArticolo"));
        inserisciArticolo->setFont(font);

        verticalLayout_11->addWidget(inserisciArticolo);

        visualizzaArticoli = new QPushButton(layoutWidget1);
        visualizzaArticoli->setObjectName(QString::fromUtf8("visualizzaArticoli"));
        visualizzaArticoli->setFont(font);

        verticalLayout_11->addWidget(visualizzaArticoli);

        layoutWidget2 = new QWidget(homePage);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(260, 80, 289, 61));
        formLayout_6 = new QFormLayout(layoutWidget2);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        inserisciRivista = new QPushButton(layoutWidget2);
        inserisciRivista->setObjectName(QString::fromUtf8("inserisciRivista"));
        inserisciRivista->setFont(font);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, inserisciRivista);

        inserisciConferenza = new QPushButton(layoutWidget2);
        inserisciConferenza->setObjectName(QString::fromUtf8("inserisciConferenza"));
        inserisciConferenza->setFont(font);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, inserisciConferenza);

        visualizzaRivisteConferenze = new QPushButton(layoutWidget2);
        visualizzaRivisteConferenze->setObjectName(QString::fromUtf8("visualizzaRivisteConferenze"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        visualizzaRivisteConferenze->setFont(font1);

        formLayout_6->setWidget(1, QFormLayout::SpanningRole, visualizzaRivisteConferenze);

        stackedWidget->addWidget(homePage);
        aggiungiAutorePage = new QWidget();
        aggiungiAutorePage->setObjectName(QString::fromUtf8("aggiungiAutorePage"));
        layoutWidget3 = new QWidget(aggiungiAutorePage);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(440, 110, 321, 331));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listAutori = new QListWidget(layoutWidget3);
        listAutori->setObjectName(QString::fromUtf8("listAutori"));

        verticalLayout->addWidget(listAutori);

        aggiungiAutore = new QPushButton(layoutWidget3);
        aggiungiAutore->setObjectName(QString::fromUtf8("aggiungiAutore"));
        QFont font2;
        font2.setItalic(true);
        aggiungiAutore->setFont(font2);

        verticalLayout->addWidget(aggiungiAutore);

        layoutWidget4 = new QWidget(aggiungiAutorePage);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(40, 170, 336, 211));
        formLayout = new QFormLayout(layoutWidget4);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        idAutore = new QLabel(layoutWidget4);
        idAutore->setObjectName(QString::fromUtf8("idAutore"));
        idAutore->setFont(font);
        idAutore->setMargin(0);

        formLayout->setWidget(0, QFormLayout::LabelRole, idAutore);

        nomeAutore = new QLabel(layoutWidget4);
        nomeAutore->setObjectName(QString::fromUtf8("nomeAutore"));
        nomeAutore->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, nomeAutore);

        nomeAutoreText = new QLineEdit(layoutWidget4);
        nomeAutoreText->setObjectName(QString::fromUtf8("nomeAutoreText"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nomeAutoreText);

        cognome = new QLabel(layoutWidget4);
        cognome->setObjectName(QString::fromUtf8("cognome"));
        cognome->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, cognome);

        cognomeText = new QLineEdit(layoutWidget4);
        cognomeText->setObjectName(QString::fromUtf8("cognomeText"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cognomeText);

        afferenza = new QLabel(layoutWidget4);
        afferenza->setObjectName(QString::fromUtf8("afferenza"));
        afferenza->setFont(font);
        afferenza->setMargin(0);

        formLayout->setWidget(3, QFormLayout::LabelRole, afferenza);

        afferenzaText = new QTextEdit(layoutWidget4);
        afferenzaText->setObjectName(QString::fromUtf8("afferenzaText"));

        formLayout->setWidget(3, QFormLayout::FieldRole, afferenzaText);

        aggiungiAfferenza = new QPushButton(layoutWidget4);
        aggiungiAfferenza->setObjectName(QString::fromUtf8("aggiungiAfferenza"));
        aggiungiAfferenza->setFont(font2);

        formLayout->setWidget(4, QFormLayout::FieldRole, aggiungiAfferenza);

        idAutoreBox = new QSpinBox(layoutWidget4);
        idAutoreBox->setObjectName(QString::fromUtf8("idAutoreBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, idAutoreBox);

        backHome = new QPushButton(aggiungiAutorePage);
        backHome->setObjectName(QString::fromUtf8("backHome"));
        backHome->setGeometry(QRect(350, 550, 111, 31));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        backHome->setFont(font3);
        stackedWidget->addWidget(aggiungiAutorePage);
        VisualizzaAutoriPage = new QWidget();
        VisualizzaAutoriPage->setObjectName(QString::fromUtf8("VisualizzaAutoriPage"));
        layoutWidget5 = new QWidget(VisualizzaAutoriPage);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(40, 20, 741, 541));
        verticalLayout_2 = new QVBoxLayout(layoutWidget5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget5);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        listAutoriCompleta = new QListWidget(layoutWidget5);
        listAutoriCompleta->setObjectName(QString::fromUtf8("listAutoriCompleta"));

        verticalLayout_2->addWidget(listAutoriCompleta);

        backHome_2 = new QPushButton(layoutWidget5);
        backHome_2->setObjectName(QString::fromUtf8("backHome_2"));
        backHome_2->setFont(font3);

        verticalLayout_2->addWidget(backHome_2);

        stackedWidget->addWidget(VisualizzaAutoriPage);
        aggiungiConferenzaPage = new QWidget();
        aggiungiConferenzaPage->setObjectName(QString::fromUtf8("aggiungiConferenzaPage"));
        calendarioConferenza = new QCalendarWidget(aggiungiConferenzaPage);
        calendarioConferenza->setObjectName(QString::fromUtf8("calendarioConferenza"));
        calendarioConferenza->setGeometry(QRect(40, 280, 401, 171));
        calendarioConferenza->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        backHome_5 = new QPushButton(aggiungiConferenzaPage);
        backHome_5->setObjectName(QString::fromUtf8("backHome_5"));
        backHome_5->setGeometry(QRect(350, 550, 111, 31));
        backHome_5->setFont(font3);
        layoutWidget6 = new QWidget(aggiungiConferenzaPage);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(40, 90, 401, 183));
        formLayout_5 = new QFormLayout(layoutWidget6);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        nomeConferenza = new QLabel(layoutWidget6);
        nomeConferenza->setObjectName(QString::fromUtf8("nomeConferenza"));
        nomeConferenza->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, nomeConferenza);

        nomeConfText = new QLineEdit(layoutWidget6);
        nomeConfText->setObjectName(QString::fromUtf8("nomeConfText"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, nomeConfText);

        acronimoConfText = new QLineEdit(layoutWidget6);
        acronimoConfText->setObjectName(QString::fromUtf8("acronimoConfText"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, acronimoConfText);

        luogo = new QLabel(layoutWidget6);
        luogo->setObjectName(QString::fromUtf8("luogo"));
        luogo->setFont(font);

        formLayout_5->setWidget(2, QFormLayout::LabelRole, luogo);

        luogoText = new QLineEdit(layoutWidget6);
        luogoText->setObjectName(QString::fromUtf8("luogoText"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, luogoText);

        numPartecipanti = new QLabel(layoutWidget6);
        numPartecipanti->setObjectName(QString::fromUtf8("numPartecipanti"));
        numPartecipanti->setFont(font);

        formLayout_5->setWidget(3, QFormLayout::LabelRole, numPartecipanti);

        numPartecipantiBox = new QSpinBox(layoutWidget6);
        numPartecipantiBox->setObjectName(QString::fromUtf8("numPartecipantiBox"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, numPartecipantiBox);

        organizzatoreText = new QLineEdit(layoutWidget6);
        organizzatoreText->setObjectName(QString::fromUtf8("organizzatoreText"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, organizzatoreText);

        aggiungiOrganizzatore = new QPushButton(layoutWidget6);
        aggiungiOrganizzatore->setObjectName(QString::fromUtf8("aggiungiOrganizzatore"));

        formLayout_5->setWidget(5, QFormLayout::FieldRole, aggiungiOrganizzatore);

        acronimoConferenza = new QLabel(layoutWidget6);
        acronimoConferenza->setObjectName(QString::fromUtf8("acronimoConferenza"));
        acronimoConferenza->setFont(font);

        formLayout_5->setWidget(1, QFormLayout::LabelRole, acronimoConferenza);

        organizzatore = new QLabel(layoutWidget6);
        organizzatore->setObjectName(QString::fromUtf8("organizzatore"));
        organizzatore->setFont(font);

        formLayout_5->setWidget(4, QFormLayout::LabelRole, organizzatore);

        layoutWidget7 = new QWidget(aggiungiConferenzaPage);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(460, 90, 351, 361));
        verticalLayout_4 = new QVBoxLayout(layoutWidget7);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        listConferenza = new QListWidget(layoutWidget7);
        listConferenza->setObjectName(QString::fromUtf8("listConferenza"));

        verticalLayout_4->addWidget(listConferenza);

        aggiungiConferenza = new QPushButton(layoutWidget7);
        aggiungiConferenza->setObjectName(QString::fromUtf8("aggiungiConferenza"));
        aggiungiConferenza->setFont(font2);

        verticalLayout_4->addWidget(aggiungiConferenza);

        stackedWidget->addWidget(aggiungiConferenzaPage);
        aggiungiRivistaPage = new QWidget();
        aggiungiRivistaPage->setObjectName(QString::fromUtf8("aggiungiRivistaPage"));
        calendarioRivista = new QCalendarWidget(aggiungiRivistaPage);
        calendarioRivista->setObjectName(QString::fromUtf8("calendarioRivista"));
        calendarioRivista->setGeometry(QRect(20, 260, 401, 151));
        calendarioRivista->setGridVisible(false);
        calendarioRivista->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendarioRivista->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarioRivista->setNavigationBarVisible(true);
        calendarioRivista->setDateEditEnabled(true);
        backHome_4 = new QPushButton(aggiungiRivistaPage);
        backHome_4->setObjectName(QString::fromUtf8("backHome_4"));
        backHome_4->setGeometry(QRect(350, 550, 111, 31));
        backHome_4->setFont(font3);
        layoutWidget8 = new QWidget(aggiungiRivistaPage);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(455, 90, 341, 351));
        verticalLayout_3 = new QVBoxLayout(layoutWidget8);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        listRiviste = new QListWidget(layoutWidget8);
        listRiviste->setObjectName(QString::fromUtf8("listRiviste"));

        verticalLayout_3->addWidget(listRiviste);

        aggiungiRivista = new QPushButton(layoutWidget8);
        aggiungiRivista->setObjectName(QString::fromUtf8("aggiungiRivista"));
        aggiungiRivista->setFont(font2);

        verticalLayout_3->addWidget(aggiungiRivista);

        layoutWidget9 = new QWidget(aggiungiRivistaPage);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(20, 120, 401, 121));
        formLayout_2 = new QFormLayout(layoutWidget9);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        nomeRivista = new QLabel(layoutWidget9);
        nomeRivista->setObjectName(QString::fromUtf8("nomeRivista"));
        nomeRivista->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nomeRivista);

        nomeRivistaText = new QLineEdit(layoutWidget9);
        nomeRivistaText->setObjectName(QString::fromUtf8("nomeRivistaText"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nomeRivistaText);

        acronimoRivista = new QLabel(layoutWidget9);
        acronimoRivista->setObjectName(QString::fromUtf8("acronimoRivista"));
        acronimoRivista->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, acronimoRivista);

        acronimoRivistaText = new QLineEdit(layoutWidget9);
        acronimoRivistaText->setObjectName(QString::fromUtf8("acronimoRivistaText"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, acronimoRivistaText);

        editore = new QLabel(layoutWidget9);
        editore->setObjectName(QString::fromUtf8("editore"));
        editore->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, editore);

        editoreText = new QLineEdit(layoutWidget9);
        editoreText->setObjectName(QString::fromUtf8("editoreText"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, editoreText);

        volume = new QLabel(layoutWidget9);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, volume);

        volumeBox = new QSpinBox(layoutWidget9);
        volumeBox->setObjectName(QString::fromUtf8("volumeBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, volumeBox);

        stackedWidget->addWidget(aggiungiRivistaPage);
        visualizzaRivConPage = new QWidget();
        visualizzaRivConPage->setObjectName(QString::fromUtf8("visualizzaRivConPage"));
        layoutWidget10 = new QWidget(visualizzaRivConPage);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(20, 10, 771, 571));
        verticalLayout_6 = new QVBoxLayout(layoutWidget10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget10);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);

        listRivConfCompleta = new QListWidget(layoutWidget10);
        listRivConfCompleta->setObjectName(QString::fromUtf8("listRivConfCompleta"));

        verticalLayout_6->addWidget(listRivConfCompleta);

        backHome_6 = new QPushButton(layoutWidget10);
        backHome_6->setObjectName(QString::fromUtf8("backHome_6"));
        backHome_6->setFont(font3);

        verticalLayout_6->addWidget(backHome_6);

        stackedWidget->addWidget(visualizzaRivConPage);
        aggiungiArticoloPage = new QWidget();
        aggiungiArticoloPage->setObjectName(QString::fromUtf8("aggiungiArticoloPage"));
        backHome_3 = new QPushButton(aggiungiArticoloPage);
        backHome_3->setObjectName(QString::fromUtf8("backHome_3"));
        backHome_3->setGeometry(QRect(350, 550, 111, 31));
        backHome_3->setFont(font3);
        layoutWidget11 = new QWidget(aggiungiArticoloPage);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(20, 20, 372, 441));
        formLayout_3 = new QFormLayout(layoutWidget11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        idArticolo = new QLabel(layoutWidget11);
        idArticolo->setObjectName(QString::fromUtf8("idArticolo"));
        idArticolo->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, idArticolo);

        idArticoloBox = new QSpinBox(layoutWidget11);
        idArticoloBox->setObjectName(QString::fromUtf8("idArticoloBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, idArticoloBox);

        titolo = new QLabel(layoutWidget11);
        titolo->setObjectName(QString::fromUtf8("titolo"));
        titolo->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, titolo);

        titoloText = new QLineEdit(layoutWidget11);
        titoloText->setObjectName(QString::fromUtf8("titoloText"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, titoloText);

        numPagine = new QLabel(layoutWidget11);
        numPagine->setObjectName(QString::fromUtf8("numPagine"));
        numPagine->setFont(font);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, numPagine);

        numPagineBox = new QSpinBox(layoutWidget11);
        numPagineBox->setObjectName(QString::fromUtf8("numPagineBox"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, numPagineBox);

        prezzo = new QLabel(layoutWidget11);
        prezzo->setObjectName(QString::fromUtf8("prezzo"));
        prezzo->setFont(font);

        formLayout_3->setWidget(6, QFormLayout::LabelRole, prezzo);

        PrezzoBox = new QDoubleSpinBox(layoutWidget11);
        PrezzoBox->setObjectName(QString::fromUtf8("PrezzoBox"));
        PrezzoBox->setMaximum(999.990000000000009);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, PrezzoBox);

        artCorrelati = new QLabel(layoutWidget11);
        artCorrelati->setObjectName(QString::fromUtf8("artCorrelati"));
        artCorrelati->setFont(font);

        formLayout_3->setWidget(9, QFormLayout::LabelRole, artCorrelati);

        artCorrelatiText = new QTextEdit(layoutWidget11);
        artCorrelatiText->setObjectName(QString::fromUtf8("artCorrelatiText"));

        formLayout_3->setWidget(9, QFormLayout::FieldRole, artCorrelatiText);

        aggiungiArtCorrelati = new QPushButton(layoutWidget11);
        aggiungiArtCorrelati->setObjectName(QString::fromUtf8("aggiungiArtCorrelati"));
        aggiungiArtCorrelati->setFont(font2);

        formLayout_3->setWidget(10, QFormLayout::FieldRole, aggiungiArtCorrelati);

        keywords = new QLabel(layoutWidget11);
        keywords->setObjectName(QString::fromUtf8("keywords"));
        keywords->setFont(font);

        formLayout_3->setWidget(11, QFormLayout::LabelRole, keywords);

        keywordText = new QTextEdit(layoutWidget11);
        keywordText->setObjectName(QString::fromUtf8("keywordText"));

        formLayout_3->setWidget(11, QFormLayout::FieldRole, keywordText);

        aggiungiKeyword = new QPushButton(layoutWidget11);
        aggiungiKeyword->setObjectName(QString::fromUtf8("aggiungiKeyword"));
        aggiungiKeyword->setFont(font2);

        formLayout_3->setWidget(12, QFormLayout::FieldRole, aggiungiKeyword);

        label_2 = new QLabel(layoutWidget11);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout_3->setWidget(13, QFormLayout::LabelRole, label_2);

        pubblicatoPerText = new QLineEdit(layoutWidget11);
        pubblicatoPerText->setObjectName(QString::fromUtf8("pubblicatoPerText"));

        formLayout_3->setWidget(13, QFormLayout::FieldRole, pubblicatoPerText);

        label_3 = new QLabel(layoutWidget11);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout_3->setWidget(14, QFormLayout::LabelRole, label_3);

        dataPubblicazioneText = new QLineEdit(layoutWidget11);
        dataPubblicazioneText->setObjectName(QString::fromUtf8("dataPubblicazioneText"));

        formLayout_3->setWidget(14, QFormLayout::FieldRole, dataPubblicazioneText);

        aggiungiArticolo = new QPushButton(aggiungiArticoloPage);
        aggiungiArticolo->setObjectName(QString::fromUtf8("aggiungiArticolo"));
        aggiungiArticolo->setGeometry(QRect(620, 370, 151, 31));
        aggiungiArticolo->setFont(font2);
        layoutWidget12 = new QWidget(aggiungiArticoloPage);
        layoutWidget12->setObjectName(QString::fromUtf8("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(400, 20, 421, 281));
        formLayout_4 = new QFormLayout(layoutWidget12);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        autori = new QLabel(layoutWidget12);
        autori->setObjectName(QString::fromUtf8("autori"));
        autori->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::SpanningRole, autori);

        autoriDaScegliere = new QListWidget(layoutWidget12);
        autoriDaScegliere->setObjectName(QString::fromUtf8("autoriDaScegliere"));

        formLayout_4->setWidget(1, QFormLayout::SpanningRole, autoriDaScegliere);

        sceltaId = new QLabel(layoutWidget12);
        sceltaId->setObjectName(QString::fromUtf8("sceltaId"));
        sceltaId->setFont(font);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, sceltaId);

        autoreArticolo = new QSpinBox(layoutWidget12);
        autoreArticolo->setObjectName(QString::fromUtf8("autoreArticolo"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, autoreArticolo);

        selezionaAutori = new QPushButton(layoutWidget12);
        selezionaAutori->setObjectName(QString::fromUtf8("selezionaAutori"));
        selezionaAutori->setFont(font2);

        formLayout_4->setWidget(3, QFormLayout::SpanningRole, selezionaAutori);

        widget = new QWidget(aggiungiArticoloPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(400, 310, 184, 151));
        verticalLayout_7 = new QVBoxLayout(widget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_7->addWidget(label_6);

        idUsati = new QListWidget(widget);
        idUsati->setObjectName(QString::fromUtf8("idUsati"));

        verticalLayout_7->addWidget(idUsati);

        stackedWidget->addWidget(aggiungiArticoloPage);
        visualizzaArticoliPage = new QWidget();
        visualizzaArticoliPage->setObjectName(QString::fromUtf8("visualizzaArticoliPage"));
        layoutWidget13 = new QWidget(visualizzaArticoliPage);
        layoutWidget13->setObjectName(QString::fromUtf8("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(10, 10, 801, 581));
        verticalLayout_5 = new QVBoxLayout(layoutWidget13);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget13);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        listArticoliCompleta = new QListWidget(layoutWidget13);
        listArticoliCompleta->setObjectName(QString::fromUtf8("listArticoliCompleta"));

        verticalLayout_5->addWidget(listArticoliCompleta);

        backHome_7 = new QPushButton(layoutWidget13);
        backHome_7->setObjectName(QString::fromUtf8("backHome_7"));
        backHome_7->setFont(font3);

        verticalLayout_5->addWidget(backHome_7);

        stackedWidget->addWidget(visualizzaArticoliPage);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 841, 22));
        MainWindow->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Progetto", nullptr));
        inserisciAutore->setText(QCoreApplication::translate("MainWindow", "Aggiungi Autore", nullptr));
        visualizzaAutori->setText(QCoreApplication::translate("MainWindow", "Visualizza Autori", nullptr));
        inserisciArticolo->setText(QCoreApplication::translate("MainWindow", "Aggiungi Articolo", nullptr));
        visualizzaArticoli->setText(QCoreApplication::translate("MainWindow", "Visualizza Articoli", nullptr));
        inserisciRivista->setText(QCoreApplication::translate("MainWindow", "Aggiungi Rivista", nullptr));
        inserisciConferenza->setText(QCoreApplication::translate("MainWindow", "Aggiungi Conferenza", nullptr));
        visualizzaRivisteConferenze->setText(QCoreApplication::translate("MainWindow", "Visualizza Riviste e Conferenze", nullptr));
        aggiungiAutore->setText(QCoreApplication::translate("MainWindow", "aggiungi ", nullptr));
        idAutore->setText(QCoreApplication::translate("MainWindow", "Id:", nullptr));
        nomeAutore->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        cognome->setText(QCoreApplication::translate("MainWindow", "Cognome:", nullptr));
        afferenza->setText(QCoreApplication::translate("MainWindow", "Afferenza:", nullptr));
        aggiungiAfferenza->setText(QCoreApplication::translate("MainWindow", "aggiungi afferenza", nullptr));
        backHome->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Autori ", nullptr));
        backHome_2->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        backHome_5->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        nomeConferenza->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        luogo->setText(QCoreApplication::translate("MainWindow", "luogo:", nullptr));
        numPartecipanti->setText(QCoreApplication::translate("MainWindow", "Numero di Partecipanti:", nullptr));
        aggiungiOrganizzatore->setText(QCoreApplication::translate("MainWindow", "aggiungi organizzatore", nullptr));
        acronimoConferenza->setText(QCoreApplication::translate("MainWindow", "Acronimo:", nullptr));
        organizzatore->setText(QCoreApplication::translate("MainWindow", "Organizzatore:", nullptr));
        aggiungiConferenza->setText(QCoreApplication::translate("MainWindow", "aggiungi", nullptr));
        backHome_4->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        aggiungiRivista->setText(QCoreApplication::translate("MainWindow", "Aggiungi", nullptr));
        nomeRivista->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        acronimoRivista->setText(QCoreApplication::translate("MainWindow", "Acronimo:", nullptr));
        editore->setText(QCoreApplication::translate("MainWindow", "Editore:", nullptr));
        volume->setText(QCoreApplication::translate("MainWindow", "Volume:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Riviste e conferenze:", nullptr));
        backHome_6->setText(QCoreApplication::translate("MainWindow", "home", nullptr));
        backHome_3->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        idArticolo->setText(QCoreApplication::translate("MainWindow", "Id:", nullptr));
        titolo->setText(QCoreApplication::translate("MainWindow", "Titolo:", nullptr));
        numPagine->setText(QCoreApplication::translate("MainWindow", "Numero Pagine:", nullptr));
        prezzo->setText(QCoreApplication::translate("MainWindow", "Prezzo:", nullptr));
        artCorrelati->setText(QCoreApplication::translate("MainWindow", "articoli Correlati:", nullptr));
        aggiungiArtCorrelati->setText(QCoreApplication::translate("MainWindow", "aggiungi articolo correlato", nullptr));
        keywords->setText(QCoreApplication::translate("MainWindow", "Lista di keyword:", nullptr));
        aggiungiKeyword->setText(QCoreApplication::translate("MainWindow", "aggiungi keyword", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nome rivista/conferenza:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "anno di pubblicazione:", nullptr));
        aggiungiArticolo->setText(QCoreApplication::translate("MainWindow", "aggiungi Articolo", nullptr));
        autori->setText(QCoreApplication::translate("MainWindow", "Lista di autori:", nullptr));
        sceltaId->setText(QCoreApplication::translate("MainWindow", "Scegli l'id dell'autore:", nullptr));
        selezionaAutori->setText(QCoreApplication::translate("MainWindow", "Conferma", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "id articoli gi\303\240 scelti:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Articoli:", nullptr));
        backHome_7->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
