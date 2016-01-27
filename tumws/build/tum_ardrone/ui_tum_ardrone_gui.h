/********************************************************************************
** Form generated from reading UI file 'tum_ardrone_gui.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUM_ARDRONE_GUI_H
#define UI_TUM_ARDRONE_GUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tum_ardrone_guiClass
{
public:
    QGroupBox *groupBox;
    QPlainTextEdit *plainTextEditSendCommand;
    QPushButton *buttonClearSend;
    QPushButton *buttonClear;
    QComboBox *comboBoxLoadFile;
    QLabel *label_6;
    QPushButton *buttonReset;
    QPushButton *buttonToggleState;
    QPushButton *buttonTakeoff;
    QPushButton *buttonLand;
    QPushButton *buttonSend;
    QPushButton *buttonToggleCam;
    QPushButton *buttonFlattrim;
    QGroupBox *groupBox_2;
    QLabel *labelNavdata;
    QLabel *labelControl;
    QLabel *labelPoseEst;
    QLabel *labelJoy;
    QLabel *labelDronePings;
    QLabel *labelDroneMotors;
    QGroupBox *groupBox_3;
    QPlainTextEdit *plainTextEditAutopilotStatus;
    QGroupBox *groupBox_4;
    QPlainTextEdit *plainTextEditStateestimationStatus;
    QGroupBox *groupBox_5;
    QPlainTextEdit *plainTextEditMessages;
    QGroupBox *groupBox_6;
    QRadioButton *radioButtonControKB;
    QRadioButton *radioButtonControlAuto;
    QRadioButton *radioButtonControlJoy;
    QRadioButton *radioButtonControlNone;
    QCheckBox *checkBoxUseOnboardHovering;
    QCheckBox *checkBoxPingDrone;

    void setupUi(QWidget *tum_ardrone_guiClass)
    {
        if (tum_ardrone_guiClass->objectName().isEmpty())
            tum_ardrone_guiClass->setObjectName(QString::fromUtf8("tum_ardrone_guiClass"));
        tum_ardrone_guiClass->resize(629, 679);
        groupBox = new QGroupBox(tum_ardrone_guiClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 341, 461));
        plainTextEditSendCommand = new QPlainTextEdit(groupBox);
        plainTextEditSendCommand->setObjectName(QString::fromUtf8("plainTextEditSendCommand"));
        plainTextEditSendCommand->setGeometry(QRect(0, 20, 331, 341));
        QFont font;
        font.setPointSize(10);
        plainTextEditSendCommand->setFont(font);
        plainTextEditSendCommand->setLineWrapMode(QPlainTextEdit::NoWrap);
        buttonClearSend = new QPushButton(groupBox);
        buttonClearSend->setObjectName(QString::fromUtf8("buttonClearSend"));
        buttonClearSend->setGeometry(QRect(0, 400, 111, 27));
        buttonClear = new QPushButton(groupBox);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));
        buttonClear->setGeometry(QRect(110, 400, 51, 27));
        comboBoxLoadFile = new QComboBox(groupBox);
        comboBoxLoadFile->setObjectName(QString::fromUtf8("comboBoxLoadFile"));
        comboBoxLoadFile->setGeometry(QRect(70, 370, 261, 27));
        comboBoxLoadFile->setMaxVisibleItems(100);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 376, 81, 17));
        buttonReset = new QPushButton(groupBox);
        buttonReset->setObjectName(QString::fromUtf8("buttonReset"));
        buttonReset->setGeometry(QRect(270, 400, 61, 27));
        buttonToggleState = new QPushButton(groupBox);
        buttonToggleState->setObjectName(QString::fromUtf8("buttonToggleState"));
        buttonToggleState->setGeometry(QRect(100, 430, 81, 27));
        buttonTakeoff = new QPushButton(groupBox);
        buttonTakeoff->setObjectName(QString::fromUtf8("buttonTakeoff"));
        buttonTakeoff->setGeometry(QRect(40, 430, 61, 27));
        buttonLand = new QPushButton(groupBox);
        buttonLand->setObjectName(QString::fromUtf8("buttonLand"));
        buttonLand->setGeometry(QRect(0, 430, 41, 27));
        buttonSend = new QPushButton(groupBox);
        buttonSend->setObjectName(QString::fromUtf8("buttonSend"));
        buttonSend->setGeometry(QRect(160, 400, 51, 27));
        buttonToggleCam = new QPushButton(groupBox);
        buttonToggleCam->setObjectName(QString::fromUtf8("buttonToggleCam"));
        buttonToggleCam->setGeometry(QRect(180, 430, 81, 27));
        buttonFlattrim = new QPushButton(groupBox);
        buttonFlattrim->setObjectName(QString::fromUtf8("buttonFlattrim"));
        buttonFlattrim->setGeometry(QRect(260, 430, 71, 27));
        groupBox_2 = new QGroupBox(tum_ardrone_guiClass);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(350, 10, 251, 141));
        labelNavdata = new QLabel(groupBox_2);
        labelNavdata->setObjectName(QString::fromUtf8("labelNavdata"));
        labelNavdata->setGeometry(QRect(0, 20, 191, 17));
        labelControl = new QLabel(groupBox_2);
        labelControl->setObjectName(QString::fromUtf8("labelControl"));
        labelControl->setGeometry(QRect(0, 38, 191, 17));
        labelPoseEst = new QLabel(groupBox_2);
        labelPoseEst->setObjectName(QString::fromUtf8("labelPoseEst"));
        labelPoseEst->setGeometry(QRect(0, 56, 191, 17));
        labelJoy = new QLabel(groupBox_2);
        labelJoy->setObjectName(QString::fromUtf8("labelJoy"));
        labelJoy->setGeometry(QRect(0, 74, 231, 17));
        labelDronePings = new QLabel(groupBox_2);
        labelDronePings->setObjectName(QString::fromUtf8("labelDronePings"));
        labelDronePings->setGeometry(QRect(0, 92, 261, 17));
        labelDroneMotors = new QLabel(groupBox_2);
        labelDroneMotors->setObjectName(QString::fromUtf8("labelDroneMotors"));
        labelDroneMotors->setGeometry(QRect(0, 110, 261, 17));
        groupBox_3 = new QGroupBox(tum_ardrone_guiClass);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(350, 140, 271, 131));
        plainTextEditAutopilotStatus = new QPlainTextEdit(groupBox_3);
        plainTextEditAutopilotStatus->setObjectName(QString::fromUtf8("plainTextEditAutopilotStatus"));
        plainTextEditAutopilotStatus->setEnabled(true);
        plainTextEditAutopilotStatus->setGeometry(QRect(0, 20, 271, 111));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        plainTextEditAutopilotStatus->setFont(font1);
        plainTextEditAutopilotStatus->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEditAutopilotStatus->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEditAutopilotStatus->setReadOnly(true);
        groupBox_4 = new QGroupBox(tum_ardrone_guiClass);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(350, 270, 271, 121));
        plainTextEditStateestimationStatus = new QPlainTextEdit(groupBox_4);
        plainTextEditStateestimationStatus->setObjectName(QString::fromUtf8("plainTextEditStateestimationStatus"));
        plainTextEditStateestimationStatus->setGeometry(QRect(0, 20, 271, 101));
        plainTextEditStateestimationStatus->setFont(font1);
        plainTextEditStateestimationStatus->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEditStateestimationStatus->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        plainTextEditStateestimationStatus->setReadOnly(true);
        groupBox_5 = new QGroupBox(tum_ardrone_guiClass);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 470, 611, 201));
        plainTextEditMessages = new QPlainTextEdit(groupBox_5);
        plainTextEditMessages->setObjectName(QString::fromUtf8("plainTextEditMessages"));
        plainTextEditMessages->setGeometry(QRect(0, 20, 611, 181));
        plainTextEditMessages->setFont(font);
        plainTextEditMessages->setReadOnly(true);
        groupBox_6 = new QGroupBox(tum_ardrone_guiClass);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(350, 390, 271, 111));
        radioButtonControKB = new QRadioButton(groupBox_6);
        radioButtonControKB->setObjectName(QString::fromUtf8("radioButtonControKB"));
        radioButtonControKB->setGeometry(QRect(0, 20, 116, 22));
        radioButtonControlAuto = new QRadioButton(groupBox_6);
        radioButtonControlAuto->setObjectName(QString::fromUtf8("radioButtonControlAuto"));
        radioButtonControlAuto->setGeometry(QRect(0, 40, 116, 22));
        radioButtonControlJoy = new QRadioButton(groupBox_6);
        radioButtonControlJoy->setObjectName(QString::fromUtf8("radioButtonControlJoy"));
        radioButtonControlJoy->setGeometry(QRect(130, 20, 116, 22));
        radioButtonControlNone = new QRadioButton(groupBox_6);
        radioButtonControlNone->setObjectName(QString::fromUtf8("radioButtonControlNone"));
        radioButtonControlNone->setGeometry(QRect(130, 40, 116, 22));
        radioButtonControlNone->setChecked(true);
        checkBoxUseOnboardHovering = new QCheckBox(groupBox_6);
        checkBoxUseOnboardHovering->setObjectName(QString::fromUtf8("checkBoxUseOnboardHovering"));
        checkBoxUseOnboardHovering->setGeometry(QRect(0, 60, 211, 22));
        checkBoxUseOnboardHovering->setChecked(true);
        checkBoxPingDrone = new QCheckBox(groupBox_6);
        checkBoxPingDrone->setObjectName(QString::fromUtf8("checkBoxPingDrone"));
        checkBoxPingDrone->setGeometry(QRect(0, 80, 171, 22));
        checkBoxPingDrone->setChecked(true);

        retranslateUi(tum_ardrone_guiClass);
        QObject::connect(buttonLand, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(LandClicked()));
        QObject::connect(buttonSend, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(SendClicked()));
        QObject::connect(buttonClear, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(ClearClicked()));
        QObject::connect(buttonTakeoff, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(TakeoffClicked()));
        QObject::connect(buttonReset, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(ResetClicked()));
        QObject::connect(buttonClearSend, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(ClearSendClicked()));
        QObject::connect(buttonToggleState, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(EmergencyClicked()));
        QObject::connect(buttonToggleCam, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(ToggleCamClicked()));
        QObject::connect(comboBoxLoadFile, SIGNAL(currentIndexChanged(QString)), tum_ardrone_guiClass, SLOT(LoadFileChanged(QString)));
        QObject::connect(radioButtonControKB, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(ControlSourceChanged()));
        QObject::connect(radioButtonControlAuto, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(ControlSourceChanged()));
        QObject::connect(radioButtonControlNone, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(ControlSourceChanged()));
        QObject::connect(radioButtonControlJoy, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(ControlSourceChanged()));
        QObject::connect(checkBoxUseOnboardHovering, SIGNAL(stateChanged(int)), tum_ardrone_guiClass, SLOT(ToggledUseHovering(int)));
        QObject::connect(checkBoxPingDrone, SIGNAL(stateChanged(int)), tum_ardrone_guiClass, SLOT(ToggledPingDrone(int)));
        QObject::connect(buttonFlattrim, SIGNAL(clicked()), tum_ardrone_guiClass, SLOT(FlatTrimClicked()));

        QMetaObject::connectSlotsByName(tum_ardrone_guiClass);
    } // setupUi

    void retranslateUi(QWidget *tum_ardrone_guiClass)
    {
        tum_ardrone_guiClass->setWindowTitle(QApplication::translate("tum_ardrone_guiClass", "tum_ardrone GUI", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("tum_ardrone_guiClass", "Send Commands", 0, QApplication::UnicodeUTF8));
        buttonClearSend->setText(QApplication::translate("tum_ardrone_guiClass", "Clear and Send", 0, QApplication::UnicodeUTF8));
        buttonClear->setText(QApplication::translate("tum_ardrone_guiClass", "Clear", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("tum_ardrone_guiClass", "Load File:", 0, QApplication::UnicodeUTF8));
        buttonReset->setText(QApplication::translate("tum_ardrone_guiClass", "Reset", 0, QApplication::UnicodeUTF8));
        buttonToggleState->setText(QApplication::translate("tum_ardrone_guiClass", "Emergency", 0, QApplication::UnicodeUTF8));
        buttonTakeoff->setText(QApplication::translate("tum_ardrone_guiClass", "Takeoff", 0, QApplication::UnicodeUTF8));
        buttonLand->setText(QApplication::translate("tum_ardrone_guiClass", "Land", 0, QApplication::UnicodeUTF8));
        buttonSend->setText(QApplication::translate("tum_ardrone_guiClass", "Send", 0, QApplication::UnicodeUTF8));
        buttonToggleCam->setText(QApplication::translate("tum_ardrone_guiClass", "Toggle Cam", 0, QApplication::UnicodeUTF8));
        buttonFlattrim->setText(QApplication::translate("tum_ardrone_guiClass", "FlatTrim", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("tum_ardrone_guiClass", "Node Communication  Status", 0, QApplication::UnicodeUTF8));
        labelNavdata->setText(QApplication::translate("tum_ardrone_guiClass", "Drone Navdata: -", 0, QApplication::UnicodeUTF8));
        labelControl->setText(QApplication::translate("tum_ardrone_guiClass", "Drone Control: -", 0, QApplication::UnicodeUTF8));
        labelPoseEst->setText(QApplication::translate("tum_ardrone_guiClass", "Pose Estimates: -", 0, QApplication::UnicodeUTF8));
        labelJoy->setText(QApplication::translate("tum_ardrone_guiClass", "Joy Input: -", 0, QApplication::UnicodeUTF8));
        labelDronePings->setText(QApplication::translate("tum_ardrone_guiClass", "Pings: -", 0, QApplication::UnicodeUTF8));
        labelDroneMotors->setText(QApplication::translate("tum_ardrone_guiClass", "Motors: -", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("tum_ardrone_guiClass", "Autopilot Status:", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("tum_ardrone_guiClass", "Stateestimation Status:", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("tum_ardrone_guiClass", "Messages", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("tum_ardrone_guiClass", "Control Source:", 0, QApplication::UnicodeUTF8));
        radioButtonControKB->setText(QApplication::translate("tum_ardrone_guiClass", "Keyboard", 0, QApplication::UnicodeUTF8));
        radioButtonControlAuto->setText(QApplication::translate("tum_ardrone_guiClass", "Autopilot", 0, QApplication::UnicodeUTF8));
        radioButtonControlJoy->setText(QApplication::translate("tum_ardrone_guiClass", "Joystick", 0, QApplication::UnicodeUTF8));
        radioButtonControlNone->setText(QApplication::translate("tum_ardrone_guiClass", "None", 0, QApplication::UnicodeUTF8));
        checkBoxUseOnboardHovering->setText(QApplication::translate("tum_ardrone_guiClass", "Use Onboard Hovering", 0, QApplication::UnicodeUTF8));
        checkBoxPingDrone->setText(QApplication::translate("tum_ardrone_guiClass", "Ping Drone (every 1s)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class tum_ardrone_guiClass: public Ui_tum_ardrone_guiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUM_ARDRONE_GUI_H
