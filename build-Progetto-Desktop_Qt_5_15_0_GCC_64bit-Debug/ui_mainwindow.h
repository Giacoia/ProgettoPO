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
    QPushButton *sezioneB;
    QPushButton *sezioneC;
    QPushButton *sezioneD;
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
    QPushButton *rivConfDisponibili;
    QPushButton *aggiungiArticolo;
    QWidget *layoutWidget12;
    QFormLayout *formLayout_4;
    QLabel *autori;
    QListWidget *autoriDaScegliere;
    QLabel *sceltaId;
    QSpinBox *autoreArticolo;
    QPushButton *selezionaAutori;
    QWidget *layoutWidget13;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_6;
    QListWidget *idUsati;
    QWidget *rivConfDisponibiliPage;
    QWidget *layoutWidget14;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_10;
    QListWidget *listaRivConf;
    QPushButton *backAggiungiArticolo;
    QWidget *visualizzaArticoliPage;
    QWidget *layoutWidget15;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QListWidget *listArticoliCompleta;
    QPushButton *backHome_7;
    QWidget *sezioneBPage;
    QPushButton *backHome_8;
    QWidget *layoutWidget16;
    QFormLayout *formLayout_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *ConfermaDati;
    QLineEdit *annoPubblicazione;
    QLabel *label_7;
    QSpinBox *idAutoreScelto;
    QWidget *layoutWidget17;
    QFormLayout *formLayout_8;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *nomeStruttura;
    QPushButton *ConfermaStruttura;
    QWidget *layoutWidget18;
    QFormLayout *formLayout_9;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *nomeRivistaScelto;
    QPushButton *confermaNomeRivista;
    QWidget *sezioneCPage;
    QPushButton *backHome_9;
    QWidget *layoutWidget19;
    QFormLayout *formLayout_10;
    QLabel *label_15;
    QLabel *label_16;
    QSpinBox *IdAutore;
    QPushButton *ConfermaId;
    QWidget *layoutWidget20;
    QFormLayout *formLayout_11;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *nomeConferenzaScelta;
    QLabel *label_19;
    QPushButton *ConfermaNomeEAnno;
    QLineEdit *annoDiPresentazione;
    QWidget *layoutWidget21;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_20;
    QLineEdit *guadagno;
    QWidget *layoutWidget22;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_21;
    QListWidget *listKeyword;
    QPushButton *mostraKeyword;
    QWidget *sezioneDPage;
    QPushButton *backHome_10;
    QWidget *layoutWidget23;
    QFormLayout *formLayout_12;
    QLabel *label_22;
    QLabel *label_23;
    QSpinBox *idAutoreOrdinare;
    QPushButton *ordinaArticoliPerPrezzo;
    QWidget *layoutWidget24;
    QFormLayout *formLayout_13;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *keyword;
    QPushButton *ordinaPerVariCriteri;
    QWidget *widget;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_26;
    QListWidget *listStruttureProduttive;
    QPushButton *mostraStrutture;
    QMenuBar *menubar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(841, 653);
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

        sezioneB = new QPushButton(homePage);
        sezioneB->setObjectName(QString::fromUtf8("sezioneB"));
        sezioneB->setGeometry(QRect(110, 250, 151, 31));
        sezioneB->setFont(font1);
        sezioneC = new QPushButton(homePage);
        sezioneC->setObjectName(QString::fromUtf8("sezioneC"));
        sezioneC->setGeometry(QRect(330, 250, 151, 31));
        sezioneC->setFont(font);
        sezioneD = new QPushButton(homePage);
        sezioneD->setObjectName(QString::fromUtf8("sezioneD"));
        sezioneD->setGeometry(QRect(580, 250, 121, 31));
        sezioneD->setFont(font);
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
        layoutWidget11->setGeometry(QRect(20, 20, 372, 460));
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

        rivConfDisponibili = new QPushButton(layoutWidget11);
        rivConfDisponibili->setObjectName(QString::fromUtf8("rivConfDisponibili"));
        rivConfDisponibili->setFont(font2);

        formLayout_3->setWidget(15, QFormLayout::SpanningRole, rivConfDisponibili);

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

        layoutWidget13 = new QWidget(aggiungiArticoloPage);
        layoutWidget13->setObjectName(QString::fromUtf8("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(400, 310, 184, 151));
        verticalLayout_7 = new QVBoxLayout(layoutWidget13);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget13);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_7->addWidget(label_6);

        idUsati = new QListWidget(layoutWidget13);
        idUsati->setObjectName(QString::fromUtf8("idUsati"));

        verticalLayout_7->addWidget(idUsati);

        stackedWidget->addWidget(aggiungiArticoloPage);
        rivConfDisponibiliPage = new QWidget();
        rivConfDisponibiliPage->setObjectName(QString::fromUtf8("rivConfDisponibiliPage"));
        layoutWidget14 = new QWidget(rivConfDisponibiliPage);
        layoutWidget14->setObjectName(QString::fromUtf8("layoutWidget14"));
        layoutWidget14->setGeometry(QRect(0, 0, 821, 591));
        verticalLayout_9 = new QVBoxLayout(layoutWidget14);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget14);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        verticalLayout_9->addWidget(label_10);

        listaRivConf = new QListWidget(layoutWidget14);
        listaRivConf->setObjectName(QString::fromUtf8("listaRivConf"));

        verticalLayout_9->addWidget(listaRivConf);

        backAggiungiArticolo = new QPushButton(layoutWidget14);
        backAggiungiArticolo->setObjectName(QString::fromUtf8("backAggiungiArticolo"));
        backAggiungiArticolo->setFont(font);

        verticalLayout_9->addWidget(backAggiungiArticolo);

        stackedWidget->addWidget(rivConfDisponibiliPage);
        visualizzaArticoliPage = new QWidget();
        visualizzaArticoliPage->setObjectName(QString::fromUtf8("visualizzaArticoliPage"));
        layoutWidget15 = new QWidget(visualizzaArticoliPage);
        layoutWidget15->setObjectName(QString::fromUtf8("layoutWidget15"));
        layoutWidget15->setGeometry(QRect(10, 10, 801, 581));
        verticalLayout_5 = new QVBoxLayout(layoutWidget15);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget15);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        listArticoliCompleta = new QListWidget(layoutWidget15);
        listArticoliCompleta->setObjectName(QString::fromUtf8("listArticoliCompleta"));

        verticalLayout_5->addWidget(listArticoliCompleta);

        backHome_7 = new QPushButton(layoutWidget15);
        backHome_7->setObjectName(QString::fromUtf8("backHome_7"));
        backHome_7->setFont(font3);

        verticalLayout_5->addWidget(backHome_7);

        stackedWidget->addWidget(visualizzaArticoliPage);
        sezioneBPage = new QWidget();
        sezioneBPage->setObjectName(QString::fromUtf8("sezioneBPage"));
        backHome_8 = new QPushButton(sezioneBPage);
        backHome_8->setObjectName(QString::fromUtf8("backHome_8"));
        backHome_8->setGeometry(QRect(350, 550, 111, 31));
        backHome_8->setFont(font3);
        layoutWidget16 = new QWidget(sezioneBPage);
        layoutWidget16->setObjectName(QString::fromUtf8("layoutWidget16"));
        layoutWidget16->setGeometry(QRect(210, 40, 394, 125));
        formLayout_7 = new QFormLayout(layoutWidget16);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget16);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(layoutWidget16);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        formLayout_7->setWidget(3, QFormLayout::LabelRole, label_9);

        ConfermaDati = new QPushButton(layoutWidget16);
        ConfermaDati->setObjectName(QString::fromUtf8("ConfermaDati"));
        ConfermaDati->setFont(font);

        formLayout_7->setWidget(5, QFormLayout::SpanningRole, ConfermaDati);

        annoPubblicazione = new QLineEdit(layoutWidget16);
        annoPubblicazione->setObjectName(QString::fromUtf8("annoPubblicazione"));

        formLayout_7->setWidget(3, QFormLayout::FieldRole, annoPubblicazione);

        label_7 = new QLabel(layoutWidget16);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        formLayout_7->setWidget(0, QFormLayout::SpanningRole, label_7);

        idAutoreScelto = new QSpinBox(layoutWidget16);
        idAutoreScelto->setObjectName(QString::fromUtf8("idAutoreScelto"));

        formLayout_7->setWidget(1, QFormLayout::FieldRole, idAutoreScelto);

        layoutWidget17 = new QWidget(sezioneBPage);
        layoutWidget17->setObjectName(QString::fromUtf8("layoutWidget17"));
        layoutWidget17->setGeometry(QRect(200, 230, 405, 81));
        formLayout_8 = new QFormLayout(layoutWidget17);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        formLayout_8->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget17);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        formLayout_8->setWidget(0, QFormLayout::SpanningRole, label_11);

        label_12 = new QLabel(layoutWidget17);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        formLayout_8->setWidget(1, QFormLayout::LabelRole, label_12);

        nomeStruttura = new QLineEdit(layoutWidget17);
        nomeStruttura->setObjectName(QString::fromUtf8("nomeStruttura"));

        formLayout_8->setWidget(1, QFormLayout::FieldRole, nomeStruttura);

        ConfermaStruttura = new QPushButton(layoutWidget17);
        ConfermaStruttura->setObjectName(QString::fromUtf8("ConfermaStruttura"));
        ConfermaStruttura->setFont(font);

        formLayout_8->setWidget(2, QFormLayout::SpanningRole, ConfermaStruttura);

        layoutWidget18 = new QWidget(sezioneBPage);
        layoutWidget18->setObjectName(QString::fromUtf8("layoutWidget18"));
        layoutWidget18->setGeometry(QRect(230, 400, 357, 81));
        formLayout_9 = new QFormLayout(layoutWidget18);
        formLayout_9->setObjectName(QString::fromUtf8("formLayout_9"));
        formLayout_9->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget18);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        formLayout_9->setWidget(0, QFormLayout::SpanningRole, label_13);

        label_14 = new QLabel(layoutWidget18);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        formLayout_9->setWidget(1, QFormLayout::LabelRole, label_14);

        nomeRivistaScelto = new QLineEdit(layoutWidget18);
        nomeRivistaScelto->setObjectName(QString::fromUtf8("nomeRivistaScelto"));

        formLayout_9->setWidget(1, QFormLayout::FieldRole, nomeRivistaScelto);

        confermaNomeRivista = new QPushButton(layoutWidget18);
        confermaNomeRivista->setObjectName(QString::fromUtf8("confermaNomeRivista"));
        confermaNomeRivista->setFont(font);

        formLayout_9->setWidget(2, QFormLayout::SpanningRole, confermaNomeRivista);

        stackedWidget->addWidget(sezioneBPage);
        sezioneCPage = new QWidget();
        sezioneCPage->setObjectName(QString::fromUtf8("sezioneCPage"));
        backHome_9 = new QPushButton(sezioneCPage);
        backHome_9->setObjectName(QString::fromUtf8("backHome_9"));
        backHome_9->setGeometry(QRect(350, 550, 111, 31));
        backHome_9->setFont(font3);
        layoutWidget19 = new QWidget(sezioneCPage);
        layoutWidget19->setObjectName(QString::fromUtf8("layoutWidget19"));
        layoutWidget19->setGeometry(QRect(250, 40, 299, 88));
        formLayout_10 = new QFormLayout(layoutWidget19);
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        formLayout_10->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget19);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        formLayout_10->setWidget(0, QFormLayout::SpanningRole, label_15);

        label_16 = new QLabel(layoutWidget19);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        formLayout_10->setWidget(2, QFormLayout::LabelRole, label_16);

        IdAutore = new QSpinBox(layoutWidget19);
        IdAutore->setObjectName(QString::fromUtf8("IdAutore"));

        formLayout_10->setWidget(2, QFormLayout::FieldRole, IdAutore);

        ConfermaId = new QPushButton(layoutWidget19);
        ConfermaId->setObjectName(QString::fromUtf8("ConfermaId"));
        ConfermaId->setFont(font);

        formLayout_10->setWidget(3, QFormLayout::SpanningRole, ConfermaId);

        layoutWidget20 = new QWidget(sezioneCPage);
        layoutWidget20->setObjectName(QString::fromUtf8("layoutWidget20"));
        layoutWidget20->setGeometry(QRect(70, 170, 432, 113));
        formLayout_11 = new QFormLayout(layoutWidget20);
        formLayout_11->setObjectName(QString::fromUtf8("formLayout_11"));
        formLayout_11->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget20);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        formLayout_11->setWidget(0, QFormLayout::SpanningRole, label_17);

        label_18 = new QLabel(layoutWidget20);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        formLayout_11->setWidget(1, QFormLayout::LabelRole, label_18);

        nomeConferenzaScelta = new QLineEdit(layoutWidget20);
        nomeConferenzaScelta->setObjectName(QString::fromUtf8("nomeConferenzaScelta"));

        formLayout_11->setWidget(1, QFormLayout::FieldRole, nomeConferenzaScelta);

        label_19 = new QLabel(layoutWidget20);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        formLayout_11->setWidget(2, QFormLayout::LabelRole, label_19);

        ConfermaNomeEAnno = new QPushButton(layoutWidget20);
        ConfermaNomeEAnno->setObjectName(QString::fromUtf8("ConfermaNomeEAnno"));
        ConfermaNomeEAnno->setFont(font);

        formLayout_11->setWidget(3, QFormLayout::SpanningRole, ConfermaNomeEAnno);

        annoDiPresentazione = new QLineEdit(layoutWidget20);
        annoDiPresentazione->setObjectName(QString::fromUtf8("annoDiPresentazione"));

        formLayout_11->setWidget(2, QFormLayout::FieldRole, annoDiPresentazione);

        layoutWidget21 = new QWidget(sezioneCPage);
        layoutWidget21->setObjectName(QString::fromUtf8("layoutWidget21"));
        layoutWidget21->setGeometry(QRect(580, 200, 171, 61));
        verticalLayout_10 = new QVBoxLayout(layoutWidget21);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget21);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setFont(font);

        verticalLayout_10->addWidget(label_20);

        guadagno = new QLineEdit(layoutWidget21);
        guadagno->setObjectName(QString::fromUtf8("guadagno"));

        verticalLayout_10->addWidget(guadagno);

        layoutWidget22 = new QWidget(sezioneCPage);
        layoutWidget22->setObjectName(QString::fromUtf8("layoutWidget22"));
        layoutWidget22->setGeometry(QRect(230, 310, 373, 211));
        verticalLayout_12 = new QVBoxLayout(layoutWidget22);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(layoutWidget22);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);

        verticalLayout_12->addWidget(label_21);

        listKeyword = new QListWidget(layoutWidget22);
        listKeyword->setObjectName(QString::fromUtf8("listKeyword"));

        verticalLayout_12->addWidget(listKeyword);

        mostraKeyword = new QPushButton(layoutWidget22);
        mostraKeyword->setObjectName(QString::fromUtf8("mostraKeyword"));
        mostraKeyword->setFont(font);

        verticalLayout_12->addWidget(mostraKeyword);

        stackedWidget->addWidget(sezioneCPage);
        sezioneDPage = new QWidget();
        sezioneDPage->setObjectName(QString::fromUtf8("sezioneDPage"));
        backHome_10 = new QPushButton(sezioneDPage);
        backHome_10->setObjectName(QString::fromUtf8("backHome_10"));
        backHome_10->setGeometry(QRect(350, 550, 111, 31));
        backHome_10->setFont(font3);
        layoutWidget23 = new QWidget(sezioneDPage);
        layoutWidget23->setObjectName(QString::fromUtf8("layoutWidget23"));
        layoutWidget23->setGeometry(QRect(210, 60, 352, 82));
        formLayout_12 = new QFormLayout(layoutWidget23);
        formLayout_12->setObjectName(QString::fromUtf8("formLayout_12"));
        formLayout_12->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget23);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setFont(font);

        formLayout_12->setWidget(0, QFormLayout::SpanningRole, label_22);

        label_23 = new QLabel(layoutWidget23);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);

        formLayout_12->setWidget(1, QFormLayout::LabelRole, label_23);

        idAutoreOrdinare = new QSpinBox(layoutWidget23);
        idAutoreOrdinare->setObjectName(QString::fromUtf8("idAutoreOrdinare"));

        formLayout_12->setWidget(1, QFormLayout::FieldRole, idAutoreOrdinare);

        ordinaArticoliPerPrezzo = new QPushButton(layoutWidget23);
        ordinaArticoliPerPrezzo->setObjectName(QString::fromUtf8("ordinaArticoliPerPrezzo"));

        formLayout_12->setWidget(2, QFormLayout::SpanningRole, ordinaArticoliPerPrezzo);

        layoutWidget24 = new QWidget(sezioneDPage);
        layoutWidget24->setObjectName(QString::fromUtf8("layoutWidget24"));
        layoutWidget24->setGeometry(QRect(120, 190, 541, 81));
        formLayout_13 = new QFormLayout(layoutWidget24);
        formLayout_13->setObjectName(QString::fromUtf8("formLayout_13"));
        formLayout_13->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget24);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setFont(font);

        formLayout_13->setWidget(0, QFormLayout::SpanningRole, label_24);

        label_25 = new QLabel(layoutWidget24);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_13->setWidget(1, QFormLayout::LabelRole, label_25);

        keyword = new QLineEdit(layoutWidget24);
        keyword->setObjectName(QString::fromUtf8("keyword"));

        formLayout_13->setWidget(1, QFormLayout::FieldRole, keyword);

        ordinaPerVariCriteri = new QPushButton(layoutWidget24);
        ordinaPerVariCriteri->setObjectName(QString::fromUtf8("ordinaPerVariCriteri"));

        formLayout_13->setWidget(2, QFormLayout::SpanningRole, ordinaPerVariCriteri);

        widget = new QWidget(sezioneDPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(280, 290, 258, 217));
        verticalLayout_13 = new QVBoxLayout(widget);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_26 = new QLabel(widget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font);

        verticalLayout_13->addWidget(label_26);

        listStruttureProduttive = new QListWidget(widget);
        listStruttureProduttive->setObjectName(QString::fromUtf8("listStruttureProduttive"));

        verticalLayout_13->addWidget(listStruttureProduttive);

        mostraStrutture = new QPushButton(widget);
        mostraStrutture->setObjectName(QString::fromUtf8("mostraStrutture"));

        verticalLayout_13->addWidget(mostraStrutture);

        stackedWidget->addWidget(sezioneDPage);

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
        sezioneB->setText(QCoreApplication::translate("MainWindow", "Sezione B", nullptr));
        sezioneC->setText(QCoreApplication::translate("MainWindow", "Sezione C", nullptr));
        sezioneD->setText(QCoreApplication::translate("MainWindow", "Sezione D ed E", nullptr));
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
        rivConfDisponibili->setText(QCoreApplication::translate("MainWindow", "visualizza le riviste/conferenze", nullptr));
        aggiungiArticolo->setText(QCoreApplication::translate("MainWindow", "aggiungi Articolo", nullptr));
        autori->setText(QCoreApplication::translate("MainWindow", "Lista di autori:", nullptr));
        sceltaId->setText(QCoreApplication::translate("MainWindow", "Scegli l'id dell'autore:", nullptr));
        selezionaAutori->setText(QCoreApplication::translate("MainWindow", "Conferma", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "id articoli gi\303\240 scelti:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Riviste/Conferenze disponibili:", nullptr));
        backAggiungiArticolo->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Articoli:", nullptr));
        backHome_7->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        backHome_8->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Inserisci l'id dell'autore:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Inserisci l'anno di pubblicazione:", nullptr));
        ConfermaDati->setText(QCoreApplication::translate("MainWindow", "Conferma", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "ARTICOLI PUBBLICATI DA AUTORE IN UN DATO ANNO", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "ARTICOLI PUBBLICATI DAI MEMBRI DI UNA STRUTTURA", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Inserisci il nome della struttura:", nullptr));
        ConfermaStruttura->setText(QCoreApplication::translate("MainWindow", "Conferma", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "ARTICOLI PUBBLICATI PER UNA RIVISTA", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Inserisci il nome della rivista:", nullptr));
        confermaNomeRivista->setText(QCoreApplication::translate("MainWindow", "Conferma", nullptr));
        backHome_9->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "ARTICOLI PI\303\231 ECONOMICI DI UN AUTORE", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Inserisci l'id dell'autore: ", nullptr));
        ConfermaId->setText(QCoreApplication::translate("MainWindow", "Conferma", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "GUADAGNO DI UNA CONFERENZA IN UN ANNO PRECISO", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Inserisci il nome della conferenza:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Anno di presentazione:", nullptr));
        ConfermaNomeEAnno->setText(QCoreApplication::translate("MainWindow", "Conferma", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Guadagno Conferenza:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "KEYWORD CHE PORTANO AL GUADAGNO PIU ALTO", nullptr));
        mostraKeyword->setText(QCoreApplication::translate("MainWindow", "Mostra", nullptr));
        backHome_10->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "ARTICOLI DI UN AUTORE ORDINATI PER PREZZO", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Inserisci id autore: ", nullptr));
        ordinaArticoliPerPrezzo->setText(QCoreApplication::translate("MainWindow", "Ordina", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "ARTICOLI RELATIVI AD UNA KEYWORD ORDINATI SECONDO VARI CRITERI", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Inserisci una keyword: ", nullptr));
        ordinaPerVariCriteri->setText(QCoreApplication::translate("MainWindow", "ordina", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "STRUTTURE PI\303\231 PRODUTTIVE:", nullptr));
        mostraStrutture->setText(QCoreApplication::translate("MainWindow", "mostra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
