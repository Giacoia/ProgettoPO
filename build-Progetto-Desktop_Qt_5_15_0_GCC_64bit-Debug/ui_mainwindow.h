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
    QPushButton *inserisciAutore;
    QPushButton *VisualizzaAutori;
    QPushButton *pushButton;
    QWidget *aggiungiAutorePage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listAutori;
    QPushButton *aggiungiAutore;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *idAutore;
    QLabel *nome;
    QLineEdit *nomeAutoreText;
    QLabel *cognome;
    QLineEdit *cognomeText;
    QLabel *afferenza;
    QTextEdit *afferenzaText;
    QPushButton *aggiungiAfferenza;
    QSpinBox *idAutoreBox;
    QPushButton *backHome;
    QWidget *VisualizzaAutoriPage;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QListWidget *listAutoriCompleta;
    QPushButton *backHome_2;
    QWidget *AggiungiArticoloPage;
    QLabel *keywords;
    QTextEdit *keywordText;
    QDoubleSpinBox *PrezzoBox;
    QLabel *prezzo;
    QTextEdit *artCorrelatiText;
    QLabel *artCorrelati;
    QWidget *widget1;
    QFormLayout *formLayout_2;
    QLabel *idArticolo;
    QSpinBox *idArticoloBox;
    QLabel *titolo;
    QLineEdit *titoloText;
    QLabel *numPagine;
    QSpinBox *numPagineBox;
    QLabel *autori;
    QListWidget *autoriDaScegliere;
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
        VisualizzaAutori = new QPushButton(homePage);
        VisualizzaAutori->setObjectName(QString::fromUtf8("VisualizzaAutori"));
        VisualizzaAutori->setGeometry(QRect(150, 240, 131, 31));
        pushButton = new QPushButton(homePage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 300, 141, 31));
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

        nome = new QLabel(layoutWidget1);
        nome->setObjectName(QString::fromUtf8("nome"));
        nome->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, nome);

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
        widget = new QWidget(VisualizzaAutoriPage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 20, 721, 541));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        listAutoriCompleta = new QListWidget(widget);
        listAutoriCompleta->setObjectName(QString::fromUtf8("listAutoriCompleta"));

        verticalLayout_2->addWidget(listAutoriCompleta);

        backHome_2 = new QPushButton(widget);
        backHome_2->setObjectName(QString::fromUtf8("backHome_2"));

        verticalLayout_2->addWidget(backHome_2);

        stackedWidget->addWidget(VisualizzaAutoriPage);
        AggiungiArticoloPage = new QWidget();
        AggiungiArticoloPage->setObjectName(QString::fromUtf8("AggiungiArticoloPage"));
        keywords = new QLabel(AggiungiArticoloPage);
        keywords->setObjectName(QString::fromUtf8("keywords"));
        keywords->setGeometry(QRect(480, 130, 121, 21));
        keywordText = new QTextEdit(AggiungiArticoloPage);
        keywordText->setObjectName(QString::fromUtf8("keywordText"));
        keywordText->setGeometry(QRect(620, 100, 181, 70));
        PrezzoBox = new QDoubleSpinBox(AggiungiArticoloPage);
        PrezzoBox->setObjectName(QString::fromUtf8("PrezzoBox"));
        PrezzoBox->setGeometry(QRect(660, 190, 101, 31));
        PrezzoBox->setMaximum(999.990000000000009);
        prezzo = new QLabel(AggiungiArticoloPage);
        prezzo->setObjectName(QString::fromUtf8("prezzo"));
        prezzo->setGeometry(QRect(500, 190, 67, 17));
        artCorrelatiText = new QTextEdit(AggiungiArticoloPage);
        artCorrelatiText->setObjectName(QString::fromUtf8("artCorrelatiText"));
        artCorrelatiText->setGeometry(QRect(660, 250, 104, 70));
        artCorrelati = new QLabel(AggiungiArticoloPage);
        artCorrelati->setObjectName(QString::fromUtf8("artCorrelati"));
        artCorrelati->setGeometry(QRect(500, 250, 67, 17));
        widget1 = new QWidget(AggiungiArticoloPage);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(80, 30, 373, 289));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        idArticolo = new QLabel(widget1);
        idArticolo->setObjectName(QString::fromUtf8("idArticolo"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, idArticolo);

        idArticoloBox = new QSpinBox(widget1);
        idArticoloBox->setObjectName(QString::fromUtf8("idArticoloBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, idArticoloBox);

        titolo = new QLabel(widget1);
        titolo->setObjectName(QString::fromUtf8("titolo"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, titolo);

        titoloText = new QLineEdit(widget1);
        titoloText->setObjectName(QString::fromUtf8("titoloText"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, titoloText);

        numPagine = new QLabel(widget1);
        numPagine->setObjectName(QString::fromUtf8("numPagine"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, numPagine);

        numPagineBox = new QSpinBox(widget1);
        numPagineBox->setObjectName(QString::fromUtf8("numPagineBox"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, numPagineBox);

        autori = new QLabel(widget1);
        autori->setObjectName(QString::fromUtf8("autori"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, autori);

        autoriDaScegliere = new QListWidget(widget1);
        autoriDaScegliere->setObjectName(QString::fromUtf8("autoriDaScegliere"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, autoriDaScegliere);

        stackedWidget->addWidget(AggiungiArticoloPage);

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
        VisualizzaAutori->setText(QCoreApplication::translate("MainWindow", "Visualizza Autori", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Aggiungi Articolo", nullptr));
        aggiungiAutore->setText(QCoreApplication::translate("MainWindow", "aggiungi ", nullptr));
        idAutore->setText(QCoreApplication::translate("MainWindow", "Id:", nullptr));
        nome->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        cognome->setText(QCoreApplication::translate("MainWindow", "Cognome:", nullptr));
        afferenza->setText(QCoreApplication::translate("MainWindow", "Afferenza:", nullptr));
        aggiungiAfferenza->setText(QCoreApplication::translate("MainWindow", "aggiungi afferenza", nullptr));
        backHome->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Autori Presenti", nullptr));
        backHome_2->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        keywords->setText(QCoreApplication::translate("MainWindow", "Lista di keyword:", nullptr));
        prezzo->setText(QCoreApplication::translate("MainWindow", "Prezzo:", nullptr));
        artCorrelati->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        idArticolo->setText(QCoreApplication::translate("MainWindow", "Id:", nullptr));
        titolo->setText(QCoreApplication::translate("MainWindow", "Titolo:", nullptr));
        numPagine->setText(QCoreApplication::translate("MainWindow", "Numero Pagine:", nullptr));
        autori->setText(QCoreApplication::translate("MainWindow", "Lista di autori:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
