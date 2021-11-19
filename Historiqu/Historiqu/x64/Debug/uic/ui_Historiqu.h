/********************************************************************************
** Form generated from reading UI file 'Historiqu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORIQU_H
#define UI_HISTORIQU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoriquClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HistoriquClass)
    {
        if (HistoriquClass->objectName().isEmpty())
            HistoriquClass->setObjectName(QString::fromUtf8("HistoriquClass"));
        HistoriquClass->resize(714, 534);
        centralWidget = new QWidget(HistoriquClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        HistoriquClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HistoriquClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 714, 21));
        HistoriquClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HistoriquClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HistoriquClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HistoriquClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HistoriquClass->setStatusBar(statusBar);

        retranslateUi(HistoriquClass);

        QMetaObject::connectSlotsByName(HistoriquClass);
    } // setupUi

    void retranslateUi(QMainWindow *HistoriquClass)
    {
        HistoriquClass->setWindowTitle(QCoreApplication::translate("HistoriquClass", "Historiqu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoriquClass: public Ui_HistoriquClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORIQU_H
