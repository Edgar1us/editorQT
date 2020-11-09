/********************************************************************************
** Form generated from reading UI file 'DialogoDeshacer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGODESHACER_H
#define UI_DIALOGODESHACER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogoDeshacer
{
public:
    QPushButton *botonDeshacer;
    QPushButton *botonRehacer;
    QPushButton *botonCancelar;
    QPushButton *botonAceptar;

    void setupUi(QDialog *DialogoDeshacer)
    {
        if (DialogoDeshacer->objectName().isEmpty())
            DialogoDeshacer->setObjectName(QString::fromUtf8("DialogoDeshacer"));
        DialogoDeshacer->resize(652, 498);
        botonDeshacer = new QPushButton(DialogoDeshacer);
        botonDeshacer->setObjectName(QString::fromUtf8("botonDeshacer"));
        botonDeshacer->setGeometry(QRect(140, 120, 89, 25));
        botonRehacer = new QPushButton(DialogoDeshacer);
        botonRehacer->setObjectName(QString::fromUtf8("botonRehacer"));
        botonRehacer->setGeometry(QRect(300, 120, 89, 25));
        botonCancelar = new QPushButton(DialogoDeshacer);
        botonCancelar->setObjectName(QString::fromUtf8("botonCancelar"));
        botonCancelar->setGeometry(QRect(410, 370, 89, 25));
        botonAceptar = new QPushButton(DialogoDeshacer);
        botonAceptar->setObjectName(QString::fromUtf8("botonAceptar"));
        botonAceptar->setGeometry(QRect(530, 370, 89, 25));

        retranslateUi(DialogoDeshacer);

        QMetaObject::connectSlotsByName(DialogoDeshacer);
    } // setupUi

    void retranslateUi(QDialog *DialogoDeshacer)
    {
        DialogoDeshacer->setWindowTitle(QApplication::translate("DialogoDeshacer", "Dialog", nullptr));
        botonDeshacer->setText(QApplication::translate("DialogoDeshacer", "Deshacer", nullptr));
        botonRehacer->setText(QApplication::translate("DialogoDeshacer", "Rehacer", nullptr));
        botonCancelar->setText(QApplication::translate("DialogoDeshacer", "Cancelar", nullptr));
        botonAceptar->setText(QApplication::translate("DialogoDeshacer", "Aceptar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogoDeshacer: public Ui_DialogoDeshacer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGODESHACER_H
