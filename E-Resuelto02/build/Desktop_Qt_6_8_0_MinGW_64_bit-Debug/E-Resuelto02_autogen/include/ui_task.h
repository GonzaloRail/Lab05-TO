/********************************************************************************
** Form generated from reading UI file 'task.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_H
#define UI_TASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Task
{
public:
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Task)
    {
        if (Task->objectName().isEmpty())
            Task->setObjectName("Task");
        Task->resize(400, 300);
        checkBox = new QCheckBox(Task);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(30, 110, 78, 22));
        pushButton = new QPushButton(Task);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(170, 120, 80, 24));
        pushButton_2 = new QPushButton(Task);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 120, 80, 24));

        retranslateUi(Task);

        QMetaObject::connectSlotsByName(Task);
    } // setupUi

    void retranslateUi(QWidget *Task)
    {
        Task->setWindowTitle(QCoreApplication::translate("Task", "Form", nullptr));
        checkBox->setText(QCoreApplication::translate("Task", "CheckBox", nullptr));
        pushButton->setText(QCoreApplication::translate("Task", "edit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Task", "Quitar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Task: public Ui_Task {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASK_H
