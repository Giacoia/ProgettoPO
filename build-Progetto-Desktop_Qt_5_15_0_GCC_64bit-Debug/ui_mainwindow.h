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
#include <QtWidgets/QRadioButton>
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
    QPushButton *inserisciAutore;
    QPushButton *visualizzaAutori;
    QPushButton *inserisciArticolo;
    QPushButton *inserisciRivista;
    QPushButton *inserisciConferenza;
    QWidget *aggiungiAutorePage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listAutori;
    QPushButton *aggiungiAutore;
    QWidget *layoutWidget1;
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
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *listAutoriCompleta;
    QPushButton *backHome_2;
    QWidget *aggiungiConferenzaPage;
    QCalendarWidget *calendarWidget;
    QPushButton *backHome_5;
    QWidget *widget;
    QFormLayout *formLayout_5;
    QLabel *nomeConferenza;
    QLineEdit *nomeConfText;
    QLabel *acronimoConferenza;
    QLineEdit *acronimoConfText;
    QLabel *luogo;
    QLineEdit *luogoText;
    QLabel *numPartecipanti;
    QSpinBox *numPartecipantiBox;
    QLabel *organizzatore;
    QLineEdit *organizzatoreText;
    QPushButton *aggiungiOrganizzatore;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listConferenza;
    QPushButton *aggiungiConferenza;
    QWidget *aggiungiRivistaPage;
    QCalendarWidget *calendarioRivista;
    QPushButton *backHome_4;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listRiviste;
    QPushButton *aggiungiRivista;
    QWidget *layoutWidget4;
    QFormLayout *formLayout_2;
    QLabel *nomeRivista;
    QLineEdit *nomeRivistaText;
    QLabel *acronimoRivista;
    QLineEdit *acronimoRivistaText;
    QLabel *editore;
    QLineEdit *editoreText;
    QLabel *volume;
    QSpinBox *volumeBox;
    QWidget *aggiungiArticoloPage;
    QPushButton *backHome_3;
    QWidget *widget2;
    QFormLayout *formLayout_3;
    QLabel *idArticolo;
    QLabel *prezzo;
    QDoubleSpinBox *PrezzoBox;
    QSpinBox *idArticoloBox;
    QLabel *numPagine;
    QSpinBox *numPagineBox;
    QTextEdit *artCorrelatiText;
    QPushButton *pushButton;
    QLabel *artCorrelati;
    QWidget *widget3;
    QFormLayout *formLayout_4;
    QLabel *titolo;
    QLabel *autori;
    QListWidget *autoriDaScegliere;
    QLabel *keywords;
    QTextEdit *keywordText;
    QLineEdit *titoloText;
    QPushButton *pushButton_2;
    QWidget *widget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pubblicatoIn;
    QRadioButton *rivistaButton;
    QRadioButton *conferenzaButton;
    QWidget *widget5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *PubblicatoIn;
    QWidget *widget6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit;
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
        inserisciAutore = new QPushButton(homePage);
        inserisciAutore->setObjectName(QString::fromUtf8("inserisciAutore"));
        inserisciAutore->setGeometry(QRect(150, 180, 131, 31));
        visualizzaAutori = new QPushButton(homePage);
        visualizzaAutori->setObjectName(QString::fromUtf8("visualizzaAutori"));
        visualizzaAutori->setGeometry(QRect(150, 240, 131, 31));
        inserisciArticolo = new QPushButton(homePage);
        inserisciArticolo->setObjectName(QString::fromUtf8("inserisciArticolo"));
        inserisciArticolo->setGeometry(QRect(150, 420, 141, 31));
        inserisciRivista = new QPushButton(homePage);
        inserisciRivista->setObjectName(QString::fromUtf8("inserisciRivista"));
        inserisciRivista->setGeometry(QRect(150, 360, 141, 31));
        inserisciConferenza = new QPushButton(homePage);
        inserisciConferenza->setObjectName(QString::fromUtf8("inserisciConferenza"));
        inserisciConferenza->setGeometry(QRect(150, 300, 151, 31));
        stackedWidget->addWidget(homePage);
        aggiungiAutorePage = new QWidget();
        aggiungiAutorePage->setObjectName(QString::fromUtf8("aggiungiAutorePage"));
        layoutWidget = new QWidget(aggiungiAutorePage);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(440, 110, 321, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listAutori = new QListWidget(layoutWidget);
        listAutori->setObjectName(QString::fromUtf8("listAutori"));

        verticalLayout->addWidget(listAutori);

        aggiungiAutore = new QPushButton(layoutWidget);
        aggiungiAutore->setObjectName(QString::fromUtf8("aggiungiAutore"));

        verticalLayout->addWidget(aggiungiAutore);

        layoutWidget1 = new QWidget(aggiungiAutorePage);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 170, 336, 211));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        idAutore = new QLabel(layoutWidget1);
        idAutore->setObjectName(QString::fromUtf8("idAutore"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        idAutore->setFont(font);
        idAutore->setMargin(0);

        formLayout->setWidget(0, QFormLayout::LabelRole, idAutore);

        nomeAutore = new QLabel(layoutWidget1);
        nomeAutore->setObjectName(QString::fromUtf8("nomeAutore"));
        nomeAutore->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, nomeAutore);

        nomeAutoreText = new QLineEdit(layoutWidget1);
        nomeAutoreText->setObjectName(QString::fromUtf8("nomeAutoreText"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nomeAutoreText);

        cognome = new QLabel(layoutWidget1);
        cognome->setObjectName(QString::fromUtf8("cognome"));
        cognome->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, cognome);

        cognomeText = new QLineEdit(layoutWidget1);
        cognomeText->setObjectName(QString::fromUtf8("cognomeText"));

        formLayout->setWidget(2, QFormLayout::FieldRole, cognomeText);

        afferenza = new QLabel(layoutWidget1);
        afferenza->setObjectName(QString::fromUtf8("afferenza"));
        afferenza->setFont(font);
        afferenza->setMargin(0);

        formLayout->setWidget(3, QFormLayout::LabelRole, afferenza);

        afferenzaText = new QTextEdit(layoutWidget1);
        afferenzaText->setObjectName(QString::fromUtf8("afferenzaText"));

        formLayout->setWidget(3, QFormLayout::FieldRole, afferenzaText);

        aggiungiAfferenza = new QPushButton(layoutWidget1);
        aggiungiAfferenza->setObjectName(QString::fromUtf8("aggiungiAfferenza"));

        formLayout->setWidget(4, QFormLayout::FieldRole, aggiungiAfferenza);

        idAutoreBox = new QSpinBox(layoutWidget1);
        idAutoreBox->setObjectName(QString::fromUtf8("idAutoreBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, idAutoreBox);

        backHome = new QPushButton(aggiungiAutorePage);
        backHome->setObjectName(QString::fromUtf8("backHome"));
        backHome->setGeometry(QRect(350, 500, 111, 31));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        backHome->setFont(font1);
        stackedWidget->addWidget(aggiungiAutorePage);
        VisualizzaAutoriPage = new QWidget();
        VisualizzaAutoriPage->setObjectName(QString::fromUtf8("VisualizzaAutoriPage"));
        layoutWidget2 = new QWidget(VisualizzaAutoriPage);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 20, 721, 541));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        listAutoriCompleta = new QListWidget(layoutWidget2);
        listAutoriCompleta->setObjectName(QString::fromUtf8("listAutoriCompleta"));

        verticalLayout_2->addWidget(listAutoriCompleta);

        backHome_2 = new QPushButton(layoutWidget2);
        backHome_2->setObjectName(QString::fromUtf8("backHome_2"));

        verticalLayout_2->addWidget(backHome_2);

        stackedWidget->addWidget(VisualizzaAutoriPage);
        aggiungiConferenzaPage = new QWidget();
        aggiungiConferenzaPage->setObjectName(QString::fromUtf8("aggiungiConferenzaPage"));
        calendarWidget = new QCalendarWidget(aggiungiConferenzaPage);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(40, 280, 401, 171));
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        backHome_5 = new QPushButton(aggiungiConferenzaPage);
        backHome_5->setObjectName(QString::fromUtf8("backHome_5"));
        backHome_5->setGeometry(QRect(370, 520, 89, 25));
        widget = new QWidget(aggiungiConferenzaPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 90, 401, 183));
        formLayout_5 = new QFormLayout(widget);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        nomeConferenza = new QLabel(widget);
        nomeConferenza->setObjectName(QString::fromUtf8("nomeConferenza"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, nomeConferenza);

        nomeConfText = new QLineEdit(widget);
        nomeConfText->setObjectName(QString::fromUtf8("nomeConfText"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, nomeConfText);

        acronimoConferenza = new QLabel(widget);
        acronimoConferenza->setObjectName(QString::fromUtf8("acronimoConferenza"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, acronimoConferenza);

        acronimoConfText = new QLineEdit(widget);
        acronimoConfText->setObjectName(QString::fromUtf8("acronimoConfText"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, acronimoConfText);

        luogo = new QLabel(widget);
        luogo->setObjectName(QString::fromUtf8("luogo"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, luogo);

        luogoText = new QLineEdit(widget);
        luogoText->setObjectName(QString::fromUtf8("luogoText"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, luogoText);

        numPartecipanti = new QLabel(widget);
        numPartecipanti->setObjectName(QString::fromUtf8("numPartecipanti"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, numPartecipanti);

        numPartecipantiBox = new QSpinBox(widget);
        numPartecipantiBox->setObjectName(QString::fromUtf8("numPartecipantiBox"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, numPartecipantiBox);

        organizzatore = new QLabel(widget);
        organizzatore->setObjectName(QString::fromUtf8("organizzatore"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, organizzatore);

        organizzatoreText = new QLineEdit(widget);
        organizzatoreText->setObjectName(QString::fromUtf8("organizzatoreText"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, organizzatoreText);

        aggiungiOrganizzatore = new QPushButton(widget);
        aggiungiOrganizzatore->setObjectName(QString::fromUtf8("aggiungiOrganizzatore"));

        formLayout_5->setWidget(5, QFormLayout::FieldRole, aggiungiOrganizzatore);

        widget1 = new QWidget(aggiungiConferenzaPage);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(460, 90, 351, 361));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        listConferenza = new QListWidget(widget1);
        listConferenza->setObjectName(QString::fromUtf8("listConferenza"));

        verticalLayout_4->addWidget(listConferenza);

        aggiungiConferenza = new QPushButton(widget1);
        aggiungiConferenza->setObjectName(QString::fromUtf8("aggiungiConferenza"));

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
        backHome_4->setGeometry(QRect(360, 520, 89, 25));
        layoutWidget3 = new QWidget(aggiungiRivistaPage);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(455, 90, 341, 351));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        listRiviste = new QListWidget(layoutWidget3);
        listRiviste->setObjectName(QString::fromUtf8("listRiviste"));

        verticalLayout_3->addWidget(listRiviste);

        aggiungiRivista = new QPushButton(layoutWidget3);
        aggiungiRivista->setObjectName(QString::fromUtf8("aggiungiRivista"));

        verticalLayout_3->addWidget(aggiungiRivista);

        layoutWidget4 = new QWidget(aggiungiRivistaPage);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 120, 401, 121));
        formLayout_2 = new QFormLayout(layoutWidget4);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        nomeRivista = new QLabel(layoutWidget4);
        nomeRivista->setObjectName(QString::fromUtf8("nomeRivista"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, nomeRivista);

        nomeRivistaText = new QLineEdit(layoutWidget4);
        nomeRivistaText->setObjectName(QString::fromUtf8("nomeRivistaText"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nomeRivistaText);

        acronimoRivista = new QLabel(layoutWidget4);
        acronimoRivista->setObjectName(QString::fromUtf8("acronimoRivista"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, acronimoRivista);

        acronimoRivistaText = new QLineEdit(layoutWidget4);
        acronimoRivistaText->setObjectName(QString::fromUtf8("acronimoRivistaText"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, acronimoRivistaText);

        editore = new QLabel(layoutWidget4);
        editore->setObjectName(QString::fromUtf8("editore"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, editore);

        editoreText = new QLineEdit(layoutWidget4);
        editoreText->setObjectName(QString::fromUtf8("editoreText"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, editoreText);

        volume = new QLabel(layoutWidget4);
        volume->setObjectName(QString::fromUtf8("volume"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, volume);

        volumeBox = new QSpinBox(layoutWidget4);
        volumeBox->setObjectName(QString::fromUtf8("volumeBox"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, volumeBox);

        stackedWidget->addWidget(aggiungiRivistaPage);
        aggiungiArticoloPage = new QWidget();
        aggiungiArticoloPage->setObjectName(QString::fromUtf8("aggiungiArticoloPage"));
        backHome_3 = new QPushButton(aggiungiArticoloPage);
        backHome_3->setObjectName(QString::fromUtf8("backHome_3"));
        backHome_3->setGeometry(QRect(700, 560, 89, 25));
        widget2 = new QWidget(aggiungiArticoloPage);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(20, 100, 301, 258));
        formLayout_3 = new QFormLayout(widget2);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        idArticolo = new QLabel(widget2);
        idArticolo->setObjectName(QString::fromUtf8("idArticolo"));
        idArticolo->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, idArticolo);

        prezzo = new QLabel(widget2);
        prezzo->setObjectName(QString::fromUtf8("prezzo"));
        prezzo->setFont(font);

        formLayout_3->setWidget(6, QFormLayout::LabelRole, prezzo);

        PrezzoBox = new QDoubleSpinBox(widget2);
        PrezzoBox->setObjectName(QString::fromUtf8("PrezzoBox"));
        PrezzoBox->setMaximum(999.990000000000009);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, PrezzoBox);

        idArticoloBox = new QSpinBox(widget2);
        idArticoloBox->setObjectName(QString::fromUtf8("idArticoloBox"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, idArticoloBox);

        numPagine = new QLabel(widget2);
        numPagine->setObjectName(QString::fromUtf8("numPagine"));
        numPagine->setFont(font);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, numPagine);

        numPagineBox = new QSpinBox(widget2);
        numPagineBox->setObjectName(QString::fromUtf8("numPagineBox"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, numPagineBox);

        artCorrelatiText = new QTextEdit(widget2);
        artCorrelatiText->setObjectName(QString::fromUtf8("artCorrelatiText"));

        formLayout_3->setWidget(9, QFormLayout::FieldRole, artCorrelatiText);

        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout_3->setWidget(10, QFormLayout::FieldRole, pushButton);

        artCorrelati = new QLabel(widget2);
        artCorrelati->setObjectName(QString::fromUtf8("artCorrelati"));
        artCorrelati->setFont(font);

        formLayout_3->setWidget(9, QFormLayout::LabelRole, artCorrelati);

        widget3 = new QWidget(aggiungiArticoloPage);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(330, 20, 451, 391));
        formLayout_4 = new QFormLayout(widget3);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        titolo = new QLabel(widget3);
        titolo->setObjectName(QString::fromUtf8("titolo"));
        titolo->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, titolo);

        autori = new QLabel(widget3);
        autori->setObjectName(QString::fromUtf8("autori"));
        autori->setFont(font);

        formLayout_4->setWidget(2, QFormLayout::LabelRole, autori);

        autoriDaScegliere = new QListWidget(widget3);
        autoriDaScegliere->setObjectName(QString::fromUtf8("autoriDaScegliere"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, autoriDaScegliere);

        keywords = new QLabel(widget3);
        keywords->setObjectName(QString::fromUtf8("keywords"));
        keywords->setFont(font);

        formLayout_4->setWidget(4, QFormLayout::LabelRole, keywords);

        keywordText = new QTextEdit(widget3);
        keywordText->setObjectName(QString::fromUtf8("keywordText"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, keywordText);

        titoloText = new QLineEdit(widget3);
        titoloText->setObjectName(QString::fromUtf8("titoloText"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, titoloText);

        pushButton_2 = new QPushButton(widget3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout_4->setWidget(5, QFormLayout::FieldRole, pushButton_2);

        widget4 = new QWidget(aggiungiArticoloPage);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(20, 370, 298, 25));
        horizontalLayout_2 = new QHBoxLayout(widget4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pubblicatoIn = new QLabel(widget4);
        pubblicatoIn->setObjectName(QString::fromUtf8("pubblicatoIn"));
        pubblicatoIn->setFont(font);

        horizontalLayout_2->addWidget(pubblicatoIn);

        rivistaButton = new QRadioButton(widget4);
        rivistaButton->setObjectName(QString::fromUtf8("rivistaButton"));

        horizontalLayout_2->addWidget(rivistaButton);

        conferenzaButton = new QRadioButton(widget4);
        conferenzaButton->setObjectName(QString::fromUtf8("conferenzaButton"));

        horizontalLayout_2->addWidget(conferenzaButton);

        widget5 = new QWidget(aggiungiArticoloPage);
        widget5->setObjectName(QString::fromUtf8("widget5"));
        widget5->setGeometry(QRect(20, 400, 301, 27));
        horizontalLayout_3 = new QHBoxLayout(widget5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget5);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        PubblicatoIn = new QLineEdit(widget5);
        PubblicatoIn->setObjectName(QString::fromUtf8("PubblicatoIn"));

        horizontalLayout_3->addWidget(PubblicatoIn);

        widget6 = new QWidget(aggiungiArticoloPage);
        widget6->setObjectName(QString::fromUtf8("widget6"));
        widget6->setGeometry(QRect(20, 430, 301, 27));
        horizontalLayout_4 = new QHBoxLayout(widget6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget6);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        lineEdit = new QLineEdit(widget6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);

        stackedWidget->addWidget(aggiungiArticoloPage);

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
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        inserisciAutore->setText(QCoreApplication::translate("MainWindow", "Aggiungi Autore", nullptr));
        visualizzaAutori->setText(QCoreApplication::translate("MainWindow", "Visualizza Autori", nullptr));
        inserisciArticolo->setText(QCoreApplication::translate("MainWindow", "Aggiungi Articolo", nullptr));
        inserisciRivista->setText(QCoreApplication::translate("MainWindow", "Aggiungi Rivista", nullptr));
        inserisciConferenza->setText(QCoreApplication::translate("MainWindow", "Aggiungi Conferenza", nullptr));
        aggiungiAutore->setText(QCoreApplication::translate("MainWindow", "aggiungi ", nullptr));
        idAutore->setText(QCoreApplication::translate("MainWindow", "Id:", nullptr));
        nomeAutore->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        cognome->setText(QCoreApplication::translate("MainWindow", "Cognome:", nullptr));
        afferenza->setText(QCoreApplication::translate("MainWindow", "Afferenza:", nullptr));
        aggiungiAfferenza->setText(QCoreApplication::translate("MainWindow", "aggiungi afferenza", nullptr));
        backHome->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Autori Presenti", nullptr));
        backHome_2->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        backHome_5->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        nomeConferenza->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        acronimoConferenza->setText(QCoreApplication::translate("MainWindow", "Acronimo:", nullptr));
        luogo->setText(QCoreApplication::translate("MainWindow", "luogo:", nullptr));
        numPartecipanti->setText(QCoreApplication::translate("MainWindow", "Numero di Partecipanti:", nullptr));
        organizzatore->setText(QCoreApplication::translate("MainWindow", "Organizzatore:", nullptr));
        aggiungiOrganizzatore->setText(QCoreApplication::translate("MainWindow", "aggiungi organizzatore", nullptr));
        aggiungiConferenza->setText(QCoreApplication::translate("MainWindow", "aggiungi", nullptr));
        backHome_4->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        aggiungiRivista->setText(QCoreApplication::translate("MainWindow", "Aggiungi", nullptr));
        nomeRivista->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        acronimoRivista->setText(QCoreApplication::translate("MainWindow", "Acronimo:", nullptr));
        editore->setText(QCoreApplication::translate("MainWindow", "Editore:", nullptr));
        volume->setText(QCoreApplication::translate("MainWindow", "Volume:", nullptr));
        backHome_3->setText(QCoreApplication::translate("MainWindow", "home", nullptr));
        idArticolo->setText(QCoreApplication::translate("MainWindow", "Id:", nullptr));
        prezzo->setText(QCoreApplication::translate("MainWindow", "Prezzo:", nullptr));
        numPagine->setText(QCoreApplication::translate("MainWindow", "Numero Pagine:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "aggiuni articoli correlati", nullptr));
        artCorrelati->setText(QCoreApplication::translate("MainWindow", "articoli Correlati:", nullptr));
        titolo->setText(QCoreApplication::translate("MainWindow", "Titolo:", nullptr));
        autori->setText(QCoreApplication::translate("MainWindow", "Lista di autori:", nullptr));
        keywords->setText(QCoreApplication::translate("MainWindow", "Lista di keyword:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "aggiungi keyword", nullptr));
        pubblicatoIn->setText(QCoreApplication::translate("MainWindow", "Pubblicato per:", nullptr));
        rivistaButton->setText(QCoreApplication::translate("MainWindow", "Rivista", nullptr));
        conferenzaButton->setText(QCoreApplication::translate("MainWindow", "Conferenza", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nome rivista/afferenza:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "anno di pubblicazione:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
