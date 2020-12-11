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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *home;
    QPushButton *pag_autore;
    QPushButton *pag_conferenza;
    QWidget *aggiungiAutore;
    QPushButton *push_autore;
    QListWidget *lista_autori;
    QPushButton *back_home;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *idAutore;
    QSpinBox *edit_idAutore;
    QLabel *nomeAutore;
    QLineEdit *edit_nomeAutore;
    QLabel *cognomeAutore;
    QLineEdit *edit_cognomeAutore;
    QLabel *afferenza;
    QTextEdit *edit_afferenza;
    QWidget *aggiungiConferenza;
    QPushButton *back_home_2;
    QCalendarWidget *calendarWidget;
    QListWidget *listWidget;
    QWidget *widget1;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QSpinBox *spinBox;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(841, 660);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 821, 631));
        home = new QWidget();
        home->setObjectName(QString::fromUtf8("home"));
        pag_autore = new QPushButton(home);
        pag_autore->setObjectName(QString::fromUtf8("pag_autore"));
        pag_autore->setGeometry(QRect(100, 130, 131, 25));
        pag_conferenza = new QPushButton(home);
        pag_conferenza->setObjectName(QString::fromUtf8("pag_conferenza"));
        pag_conferenza->setGeometry(QRect(110, 230, 161, 25));
        stackedWidget->addWidget(home);
        aggiungiAutore = new QWidget();
        aggiungiAutore->setObjectName(QString::fromUtf8("aggiungiAutore"));
        push_autore = new QPushButton(aggiungiAutore);
        push_autore->setObjectName(QString::fromUtf8("push_autore"));
        push_autore->setGeometry(QRect(150, 430, 89, 25));
        lista_autori = new QListWidget(aggiungiAutore);
        lista_autori->setObjectName(QString::fromUtf8("lista_autori"));
        lista_autori->setGeometry(QRect(340, 120, 451, 341));
        back_home = new QPushButton(aggiungiAutore);
        back_home->setObjectName(QString::fromUtf8("back_home"));
        back_home->setGeometry(QRect(340, 550, 111, 31));
        back_home->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Umpush\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(128, 128, 128, 255), stop:1 rgba(255, 255, 255, 255));\n"
""));
        widget = new QWidget(aggiungiAutore);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 120, 251, 288));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        idAutore = new QLabel(widget);
        idAutore->setObjectName(QString::fromUtf8("idAutore"));

        formLayout->setWidget(0, QFormLayout::LabelRole, idAutore);

        edit_idAutore = new QSpinBox(widget);
        edit_idAutore->setObjectName(QString::fromUtf8("edit_idAutore"));

        formLayout->setWidget(0, QFormLayout::FieldRole, edit_idAutore);

        nomeAutore = new QLabel(widget);
        nomeAutore->setObjectName(QString::fromUtf8("nomeAutore"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nomeAutore);

        edit_nomeAutore = new QLineEdit(widget);
        edit_nomeAutore->setObjectName(QString::fromUtf8("edit_nomeAutore"));

        formLayout->setWidget(1, QFormLayout::FieldRole, edit_nomeAutore);

        cognomeAutore = new QLabel(widget);
        cognomeAutore->setObjectName(QString::fromUtf8("cognomeAutore"));

        formLayout->setWidget(2, QFormLayout::LabelRole, cognomeAutore);

        edit_cognomeAutore = new QLineEdit(widget);
        edit_cognomeAutore->setObjectName(QString::fromUtf8("edit_cognomeAutore"));

        formLayout->setWidget(2, QFormLayout::FieldRole, edit_cognomeAutore);

        afferenza = new QLabel(widget);
        afferenza->setObjectName(QString::fromUtf8("afferenza"));

        formLayout->setWidget(3, QFormLayout::LabelRole, afferenza);

        edit_afferenza = new QTextEdit(widget);
        edit_afferenza->setObjectName(QString::fromUtf8("edit_afferenza"));

        formLayout->setWidget(3, QFormLayout::FieldRole, edit_afferenza);

        stackedWidget->addWidget(aggiungiAutore);
        aggiungiConferenza = new QWidget();
        aggiungiConferenza->setObjectName(QString::fromUtf8("aggiungiConferenza"));
        back_home_2 = new QPushButton(aggiungiConferenza);
        back_home_2->setObjectName(QString::fromUtf8("back_home_2"));
        back_home_2->setGeometry(QRect(340, 550, 111, 31));
        back_home_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Umpush\";\n"
"background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(128, 128, 128, 255), stop:1 rgba(255, 255, 255, 255));"));
        calendarWidget = new QCalendarWidget(aggiungiConferenza);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 290, 401, 171));
        calendarWidget->setSelectionMode(QCalendarWidget::SingleSelection);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        listWidget = new QListWidget(aggiungiConferenza);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(425, 130, 381, 331));
        widget1 = new QWidget(aggiungiConferenza);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 140, 309, 141));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_4);

        spinBox = new QSpinBox(widget1);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, spinBox);

        lineEdit_2 = new QLineEdit(widget1);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_2);

        lineEdit = new QLineEdit(widget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit);

        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label);

        stackedWidget->addWidget(aggiungiConferenza);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 841, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pag_autore->setText(QCoreApplication::translate("MainWindow", "aggiungi autore", nullptr));
        pag_conferenza->setText(QCoreApplication::translate("MainWindow", "aggiungi conferenza", nullptr));
        push_autore->setText(QCoreApplication::translate("MainWindow", "aggiungi", nullptr));
        back_home->setText(QCoreApplication::translate("MainWindow", "home", nullptr));
        idAutore->setText(QCoreApplication::translate("MainWindow", "Id:", nullptr));
        nomeAutore->setText(QCoreApplication::translate("MainWindow", "Nome:", nullptr));
        cognomeAutore->setText(QCoreApplication::translate("MainWindow", "Cognome:", nullptr));
        afferenza->setText(QCoreApplication::translate("MainWindow", "Afferenza:", nullptr));
        back_home_2->setText(QCoreApplication::translate("MainWindow", "home", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "acronimo:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "luogo:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "numero di Partecipanti:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "nome:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
