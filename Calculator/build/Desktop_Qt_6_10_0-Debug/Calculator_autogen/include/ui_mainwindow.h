/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton_c;
    QPushButton *pushButton_plusMinus;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_add;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_1;
    QPushButton *pushButton_substract;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_0;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(241, 382);
        MainWindow->setBaseSize(QSize(0, 0));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QFont font;
        font.setKerning(true);
        centralwidget->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 241, 81));
        QFont font1;
        font1.setPointSize(19);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        pushButton_c = new QPushButton(centralwidget);
        pushButton_c->setObjectName("pushButton_c");
        pushButton_c->setGeometry(QRect(0, 80, 61, 61));
        pushButton_c->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */"));
        pushButton_plusMinus = new QPushButton(centralwidget);
        pushButton_plusMinus->setObjectName("pushButton_plusMinus");
        pushButton_plusMinus->setGeometry(QRect(60, 80, 61, 61));
        pushButton_plusMinus->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */"));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        pushButton_percent->setGeometry(QRect(120, 80, 61, 61));
        pushButton_percent->setStyleSheet(QString::fromUtf8("/* (Clear,+/-,%,. buttons) Unary Operations Buttons Stylesheet */\n"
"\n"
"QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}\n"
"/* End Unary Operations Buttons Stylesheet */"));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");
        pushButton_divide->setGeometry(QRect(180, 80, 61, 61));
        pushButton_divide->setStyleSheet(QString::fromUtf8("/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_add = new QPushButton(centralwidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(180, 260, 61, 61));
        pushButton_add->setStyleSheet(QString::fromUtf8("/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 260, 61, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 260, 61, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(0, 260, 61, 61));
        pushButton_1->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */"));
        pushButton_substract = new QPushButton(centralwidget);
        pushButton_substract->setObjectName("pushButton_substract");
        pushButton_substract->setGeometry(QRect(180, 200, 61, 61));
        pushButton_substract->setStyleSheet(QString::fromUtf8("/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(60, 200, 61, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(120, 200, 61, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 200, 61, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */"));
        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName("pushButton_multiply");
        pushButton_multiply->setGeometry(QRect(180, 140, 61, 61));
        pushButton_multiply->setStyleSheet(QString::fromUtf8("/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(60, 140, 61, 61));
        pushButton_8->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(120, 140, 61, 61));
        pushButton_9->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 140, 61, 61));
        pushButton_7->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */"));
        pushButton_equals = new QPushButton(centralwidget);
        pushButton_equals->setObjectName("pushButton_equals");
        pushButton_equals->setGeometry(QRect(180, 320, 61, 61));
        pushButton_equals->setStyleSheet(QString::fromUtf8("/* (Orange buttons) Operations Buttons Stylesheet */\n"
"QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_decimal = new QPushButton(centralwidget);
        pushButton_decimal->setObjectName("pushButton_decimal");
        pushButton_decimal->setGeometry(QRect(120, 320, 61, 61));
        pushButton_decimal->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(0, 320, 121, 61));
        pushButton_0->setStyleSheet(QString::fromUtf8("/* Digits 0-9 Stylesheet */\n"
"QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"/* End Digits 0-9 Stylesheet */"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_c->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_plusMinus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_substract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
