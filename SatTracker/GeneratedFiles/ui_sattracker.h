/********************************************************************************
** Form generated from reading UI file 'sattracker.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SATTRACKER_H
#define UI_SATTRACKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SatTrackerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SatTrackerClass)
    {
        if (SatTrackerClass->objectName().isEmpty())
            SatTrackerClass->setObjectName(QStringLiteral("SatTrackerClass"));
        SatTrackerClass->resize(600, 400);
        menuBar = new QMenuBar(SatTrackerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        SatTrackerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SatTrackerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SatTrackerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(SatTrackerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SatTrackerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(SatTrackerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SatTrackerClass->setStatusBar(statusBar);

        retranslateUi(SatTrackerClass);

        QMetaObject::connectSlotsByName(SatTrackerClass);
    } // setupUi

    void retranslateUi(QMainWindow *SatTrackerClass)
    {
        SatTrackerClass->setWindowTitle(QApplication::translate("SatTrackerClass", "SatTracker", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SatTrackerClass: public Ui_SatTrackerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATTRACKER_H
