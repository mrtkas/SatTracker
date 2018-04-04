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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SatTrackerClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLCDNumber *timeBox;
    QLabel *apiKeyLabl;
    QLabel *noradIDLabel;
    QLabel *obsLonLabel;
    QLabel *obsAltLabel;
    QPlainTextEdit *noradIDText;
    QPlainTextEdit *obsLonText;
    QPlainTextEdit *obsAltText;
    QLabel *daysLabel;
    QLabel *minElevLabel;
    QPlainTextEdit *obsLatText;
    QLabel *obsLatLabel;
    QPlainTextEdit *minElevText;
    QLabel *inputLabel;
    QPushButton *submitButton;
    QSpinBox *daysBox;
    QTextEdit *apiKeyBox;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QLabel *outputInfoLabel;
    QTextBrowser *satInfoBox;
    QPushButton *sendButton;

    void setupUi(QMainWindow *SatTrackerClass)
    {
        if (SatTrackerClass->objectName().isEmpty())
            SatTrackerClass->setObjectName(QStringLiteral("SatTrackerClass"));
        SatTrackerClass->resize(600, 400);
        centralWidget = new QWidget(SatTrackerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        timeBox = new QLCDNumber(frame);
        timeBox->setObjectName(QStringLiteral("timeBox"));

        gridLayout->addWidget(timeBox, 3, 0, 1, 2);

        apiKeyLabl = new QLabel(frame);
        apiKeyLabl->setObjectName(QStringLiteral("apiKeyLabl"));

        gridLayout->addWidget(apiKeyLabl, 5, 0, 1, 1);

        noradIDLabel = new QLabel(frame);
        noradIDLabel->setObjectName(QStringLiteral("noradIDLabel"));

        gridLayout->addWidget(noradIDLabel, 6, 0, 1, 1);

        obsLonLabel = new QLabel(frame);
        obsLonLabel->setObjectName(QStringLiteral("obsLonLabel"));

        gridLayout->addWidget(obsLonLabel, 8, 0, 1, 1);

        obsAltLabel = new QLabel(frame);
        obsAltLabel->setObjectName(QStringLiteral("obsAltLabel"));

        gridLayout->addWidget(obsAltLabel, 9, 0, 1, 1);

        noradIDText = new QPlainTextEdit(frame);
        noradIDText->setObjectName(QStringLiteral("noradIDText"));
        noradIDText->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setPointSize(8);
        noradIDText->setFont(font);

        gridLayout->addWidget(noradIDText, 6, 1, 1, 1);

        obsLonText = new QPlainTextEdit(frame);
        obsLonText->setObjectName(QStringLiteral("obsLonText"));
        obsLonText->setMaximumSize(QSize(16777215, 25));
        obsLonText->setFont(font);

        gridLayout->addWidget(obsLonText, 8, 1, 1, 1);

        obsAltText = new QPlainTextEdit(frame);
        obsAltText->setObjectName(QStringLiteral("obsAltText"));
        obsAltText->setMaximumSize(QSize(16777215, 25));
        obsAltText->setFont(font);

        gridLayout->addWidget(obsAltText, 9, 1, 1, 1);

        daysLabel = new QLabel(frame);
        daysLabel->setObjectName(QStringLiteral("daysLabel"));

        gridLayout->addWidget(daysLabel, 10, 0, 1, 1);

        minElevLabel = new QLabel(frame);
        minElevLabel->setObjectName(QStringLiteral("minElevLabel"));

        gridLayout->addWidget(minElevLabel, 11, 0, 1, 1);

        obsLatText = new QPlainTextEdit(frame);
        obsLatText->setObjectName(QStringLiteral("obsLatText"));
        obsLatText->setMaximumSize(QSize(16777215, 25));
        obsLatText->setFont(font);

        gridLayout->addWidget(obsLatText, 7, 1, 1, 1);

        obsLatLabel = new QLabel(frame);
        obsLatLabel->setObjectName(QStringLiteral("obsLatLabel"));

        gridLayout->addWidget(obsLatLabel, 7, 0, 1, 1);

        minElevText = new QPlainTextEdit(frame);
        minElevText->setObjectName(QStringLiteral("minElevText"));
        minElevText->setMaximumSize(QSize(16777215, 25));
        minElevText->setFont(font);

        gridLayout->addWidget(minElevText, 11, 1, 1, 1);

        inputLabel = new QLabel(frame);
        inputLabel->setObjectName(QStringLiteral("inputLabel"));
        QFont font1;
        font1.setPointSize(10);
        inputLabel->setFont(font1);
        inputLabel->setTextFormat(Qt::PlainText);

        gridLayout->addWidget(inputLabel, 4, 0, 1, 2);

        submitButton = new QPushButton(frame);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        gridLayout->addWidget(submitButton, 12, 1, 1, 1);

        daysBox = new QSpinBox(frame);
        daysBox->setObjectName(QStringLiteral("daysBox"));
        daysBox->setMinimumSize(QSize(0, 25));
        daysBox->setFont(font);
        daysBox->setMinimum(1);
        daysBox->setMaximum(10);

        gridLayout->addWidget(daysBox, 10, 1, 1, 1);

        apiKeyBox = new QTextEdit(frame);
        apiKeyBox->setObjectName(QStringLiteral("apiKeyBox"));
        apiKeyBox->setMaximumSize(QSize(16777215, 25));
        apiKeyBox->setFont(font);

        gridLayout->addWidget(apiKeyBox, 5, 1, 1, 1);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(100, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        outputInfoLabel = new QLabel(frame_2);
        outputInfoLabel->setObjectName(QStringLiteral("outputInfoLabel"));

        verticalLayout->addWidget(outputInfoLabel);

        satInfoBox = new QTextBrowser(frame_2);
        satInfoBox->setObjectName(QStringLiteral("satInfoBox"));

        verticalLayout->addWidget(satInfoBox);

        sendButton = new QPushButton(frame_2);
        sendButton->setObjectName(QStringLiteral("sendButton"));

        verticalLayout->addWidget(sendButton);


        horizontalLayout->addWidget(frame_2);

        SatTrackerClass->setCentralWidget(centralWidget);

        retranslateUi(SatTrackerClass);

        QMetaObject::connectSlotsByName(SatTrackerClass);
    } // setupUi

    void retranslateUi(QMainWindow *SatTrackerClass)
    {
        SatTrackerClass->setWindowTitle(QApplication::translate("SatTrackerClass", "SatTracker", nullptr));
#ifndef QT_NO_TOOLTIP
        apiKeyLabl->setToolTip(QApplication::translate("SatTrackerClass", "This program uses N2YO.com API to get satellite information. For that to work you need to register and get your API key", nullptr));
#endif // QT_NO_TOOLTIP
        apiKeyLabl->setText(QApplication::translate("SatTrackerClass", "API key", nullptr));
#ifndef QT_NO_TOOLTIP
        noradIDLabel->setToolTip(QApplication::translate("SatTrackerClass", "This is the NORAD catalog number for the satellite you are trying to recieve", nullptr));
#endif // QT_NO_TOOLTIP
        noradIDLabel->setText(QApplication::translate("SatTrackerClass", "NORAD ID", nullptr));
#ifndef QT_NO_TOOLTIP
        obsLonLabel->setToolTip(QApplication::translate("SatTrackerClass", "Your longitude in decimal degrees", nullptr));
#endif // QT_NO_TOOLTIP
        obsLonLabel->setText(QApplication::translate("SatTrackerClass", "Observer longitude", nullptr));
#ifndef QT_NO_TOOLTIP
        obsAltLabel->setToolTip(QApplication::translate("SatTrackerClass", "Your altitude from sea level", nullptr));
#endif // QT_NO_TOOLTIP
        obsAltLabel->setText(QApplication::translate("SatTrackerClass", "Observer altitude", nullptr));
#ifndef QT_NO_TOOLTIP
        daysLabel->setToolTip(QApplication::translate("SatTrackerClass", "Number of days you wish to predict (up to 10)", nullptr));
#endif // QT_NO_TOOLTIP
        daysLabel->setText(QApplication::translate("SatTrackerClass", "Days to predict", nullptr));
#ifndef QT_NO_TOOLTIP
        minElevLabel->setToolTip(QApplication::translate("SatTrackerClass", "Minimum acceptable elevation. This influences signal quality(accepts intreger values in degrees)", nullptr));
#endif // QT_NO_TOOLTIP
        minElevLabel->setText(QApplication::translate("SatTrackerClass", "Minimum Elevation", nullptr));
#ifndef QT_NO_TOOLTIP
        obsLatLabel->setToolTip(QApplication::translate("SatTrackerClass", "Your latitude in decimal degrees", nullptr));
#endif // QT_NO_TOOLTIP
        obsLatLabel->setText(QApplication::translate("SatTrackerClass", "Observer latitude", nullptr));
        inputLabel->setText(QApplication::translate("SatTrackerClass", "Predicting satellite passes to be used for radio communications", nullptr));
        submitButton->setText(QApplication::translate("SatTrackerClass", "Submit", nullptr));
        outputInfoLabel->setText(QApplication::translate("SatTrackerClass", "Output info", nullptr));
        sendButton->setText(QApplication::translate("SatTrackerClass", "Send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SatTrackerClass: public Ui_SatTrackerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SATTRACKER_H
