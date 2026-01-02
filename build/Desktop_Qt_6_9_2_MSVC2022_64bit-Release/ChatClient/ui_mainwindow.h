/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QStackedWidget *stackedWidget;
    QWidget *loginPage;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QFrame *chatFrame;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *serverEdit;
    QLabel *label_3;
    QLineEdit *usernameEdit;
    QSpacerItem *verticalSpacer;
    QPushButton *loginButton;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *chatPage;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QTextEdit *roomTextEdit;
    QListWidget *userListWidget;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *sayLineEdit;
    QPushButton *sayButton;
    QPushButton *logoutButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(701, 333);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow {\n"
"    background-color: #F8F9FA; /* \346\265\205\347\201\260\345\272\225\350\211\262\357\274\214\345\222\214\347\231\273\345\275\225\346\241\206/\346\240\207\351\242\230\346\240\217\345\214\272\345\210\206 */\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("#titleLabel {\n"
"   /* \346\270\220\345\217\230\347\273\277\350\203\214\346\231\257\357\274\232\344\273\216\346\265\205\347\273\277\345\210\260\346\267\261\347\273\277\347\232\204\346\250\252\345\220\221\346\270\220\345\217\230 */\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #2E7D32, stop:1 #81C784);\n"
"    /* \346\226\207\345\255\227\346\240\267\345\274\217\357\274\232\345\212\240\347\262\227+\345\244\247\345\217\267\345\255\227\344\275\223+\347\231\275\350\211\262\357\274\210\345\222\214\347\273\277\350\203\214\346\231\257\345\257\271\346\257\224\345\272\246\351\253\230\357\274\211 */\n"
"    font: 900 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: white;\n"
"    /* \345\241\253\345\205\205+\345\261\205\344\270\255\357\274\232\350\256\251\346\226\207\345\255\227\344\270\215\350\264\264\350\276\271 */\n"
"    padding: 10px 20px;\n"
"    text-align: center;\n"
"    /* \345\217\257\351\200\211\357\274\232\350\275\273\345\276\256\345\234\206\350\247\222\350\256\251"
                        "\350\276\271\347\274\230\346\233\264\346\237\224\345\222\214 */\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"\n"
""));

        verticalLayout->addWidget(titleLabel);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        gridLayout = new QGridLayout(loginPage);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 29, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        chatFrame = new QFrame(loginPage);
        chatFrame->setObjectName("chatFrame");
        chatFrame->setStyleSheet(QString::fromUtf8("/* \345\244\226\345\261\202\345\256\271\345\231\250\357\274\210QFrame\357\274\211\357\274\232\346\265\205\347\273\277\345\272\225\350\211\262+\345\244\247\345\234\206\350\247\222+\346\237\224\345\222\214\351\230\264\345\275\261 */\n"
"#loginFrame {\n"
"    background-color: #F0FFF4; /* \346\267\241\347\273\277\350\203\214\346\231\257 */\n"
"    border-radius: 12px;\n"
"    padding: 20px;\n"
"    box-shadow: 0 4px 8px rgba(102, 187, 106, 0.15); /* \346\265\205\347\273\277\351\230\264\345\275\261 */\n"
"}\n"
"\n"
"/* \346\240\207\347\255\276\357\274\210\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200/\346\230\265\347\247\260\357\274\211\357\274\232\346\270\205\346\226\260\347\273\277+\346\264\273\346\263\274\345\255\227\344\275\223 */\n"
"#label_2 {\n"
"    font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    color: #2E7D32; /* \346\267\261\347\273\277\346\226\207\345\255\227 */\n"
"    margin-bottom: 6px;\n"
"}\n"
"#label_3 {\n"
"    font: 11pt \"\345\276\256\350\275\257\351\233\205"
                        "\351\273\221\";\n"
"    color: #2E7D32; /* \346\267\261\347\273\277\346\226\207\345\255\227 */\n"
"    margin-bottom: 6px;\n"
"}\n"
"/* \350\276\223\345\205\245\346\241\206\357\274\210QLineEdit\357\274\211\357\274\232\346\265\205\347\273\277\350\276\271\346\241\206+\345\234\206\350\247\222+\350\201\232\347\204\246\346\225\210\346\236\234 */\n"
"#serverEdit {\n"
"    border: 2px solid #C8E6C9; /* \346\267\241\347\273\277\350\276\271\346\241\206 */\n"
"    border-radius: 8px;\n"
"    padding: 8px 12px;\n"
"    font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"#serverEdit:focus {\n"
"    border-color: #81C784; /* \350\201\232\347\204\246\346\227\266\346\267\261\344\270\200\347\202\271\347\232\204\347\273\277 */\n"
"    outline: none;\n"
"}\n"
"\n"
"#usernameEdit {\n"
"    border: 2px solid #C8E6C9; /* \346\267\241\347\273\277\350\276\271\346\241\206 */\n"
"    border-radius: 8px;\n"
"    padding: 8px 12px;\n"
"    font: 10pt \"\345\276\256\350\275\257"
                        "\351\233\205\351\273\221\";\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"\n"
"\n"
"#usernameEdit:focus {\n"
"    border-color: #81C784; /* \350\201\232\347\204\246\346\227\266\346\267\261\344\270\200\347\202\271\347\232\204\347\273\277 */\n"
"    outline: none;\n"
"}\n"
"\n"
"/* \347\231\273\345\275\225\346\214\211\351\222\256\357\274\210QPushButton\357\274\211\357\274\232\346\270\220\345\217\230\347\273\277+\345\234\206\350\247\222+\344\272\244\344\272\222\345\217\215\351\246\210 */\n"
"#loginButton {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #81C784, stop:1 #4CAF50); /* \346\270\220\345\217\230\347\273\277 */\n"
"    color: white;\n"
"    font: 700 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"    border-radius: 8px;\n"
"    padding: 10px 0;\n"
"    border: none;\n"
"}\n"
"#loginButton:hover {\n"
"    background: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 #4CAF50, stop:1 #388E3C); /* \346\202\254\345\201\234\345\212\240\346\267\261 */\n"
"}\n"
"#loginButton:"
                        "pressed {\n"
"    background-color: #388E3C; /* \346\214\211\344\270\213\346\227\266\347\272\257\350\211\262\346\267\261\347\273\277 */\n"
"}"));
        chatFrame->setFrameShape(QFrame::Shape::StyledPanel);
        chatFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(chatFrame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(chatFrame);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label_2);

        serverEdit = new QLineEdit(chatFrame);
        serverEdit->setObjectName("serverEdit");

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, serverEdit);

        label_3 = new QLabel(chatFrame);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label_3);

        usernameEdit = new QLineEdit(chatFrame);
        usernameEdit->setObjectName("usernameEdit");

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, usernameEdit);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        loginButton = new QPushButton(chatFrame);
        loginButton->setObjectName("loginButton");

        verticalLayout_2->addWidget(loginButton);


        gridLayout->addWidget(chatFrame, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(208, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 29, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        stackedWidget->addWidget(loginPage);
        chatPage = new QWidget();
        chatPage->setObjectName("chatPage");
        verticalLayout_3 = new QVBoxLayout(chatPage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        roomTextEdit = new QTextEdit(chatPage);
        roomTextEdit->setObjectName("roomTextEdit");

        horizontalLayout->addWidget(roomTextEdit);

        userListWidget = new QListWidget(chatPage);
        userListWidget->setObjectName("userListWidget");
        userListWidget->setMinimumSize(QSize(0, 0));
        userListWidget->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(userListWidget);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        sayLineEdit = new QLineEdit(chatPage);
        sayLineEdit->setObjectName("sayLineEdit");

        horizontalLayout_2->addWidget(sayLineEdit);

        sayButton = new QPushButton(chatPage);
        sayButton->setObjectName("sayButton");

        horizontalLayout_2->addWidget(sayButton);

        logoutButton = new QPushButton(chatPage);
        logoutButton->setObjectName("logoutButton");

        horizontalLayout_2->addWidget(logoutButton);


        verticalLayout_3->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(chatPage);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\201\212\345\244\251\345\256\244\345\256\242\346\210\267\347\253\257", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\345\274\240\350\202\262\345\237\216\347\232\204\350\201\212\345\244\251\345\256\244", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200\357\274\232", nullptr));
        serverEdit->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\230\265\347\247\260\357\274\232", nullptr));
        usernameEdit->setText(QCoreApplication::translate("MainWindow", "yucheng", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        sayButton->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        logoutButton->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
