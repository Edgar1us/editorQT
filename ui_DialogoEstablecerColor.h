/********************************************************************************
** Form generated from reading UI file 'DialogoEstablecerColor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOESTABLECERCOLOR_H
#define UI_DIALOGOESTABLECERCOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogoEstablecerColor
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *botonElegir;
    QPushButton *botonProbar;

    void setupUi(QDialog *DialogoEstablecerColor)
    {
        if (DialogoEstablecerColor->objectName().isEmpty())
            DialogoEstablecerColor->setObjectName(QString::fromUtf8("DialogoEstablecerColor"));
        DialogoEstablecerColor->resize(272, 289);
        buttonBox = new QDialogButtonBox(DialogoEstablecerColor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-120, 230, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        botonElegir = new QPushButton(DialogoEstablecerColor);
        botonElegir->setObjectName(QString::fromUtf8("botonElegir"));
        botonElegir->setGeometry(QRect(90, 70, 89, 25));
        botonProbar = new QPushButton(DialogoEstablecerColor);
        botonProbar->setObjectName(QString::fromUtf8("botonProbar"));
        botonProbar->setGeometry(QRect(90, 120, 89, 25));

        retranslateUi(DialogoEstablecerColor);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogoEstablecerColor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogoEstablecerColor, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogoEstablecerColor);
    } // setupUi

    void retranslateUi(QDialog *DialogoEstablecerColor)
    {
        DialogoEstablecerColor->setWindowTitle(QApplication::translate("DialogoEstablecerColor", "Dialog", nullptr));
        botonElegir->setText(QApplication::translate("DialogoEstablecerColor", "ELEGIR", nullptr));
        botonProbar->setText(QApplication::translate("DialogoEstablecerColor", "PROBAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogoEstablecerColor: public Ui_DialogoEstablecerColor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOESTABLECERCOLOR_H
