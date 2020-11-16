/********************************************************************************
** Form generated from reading UI file 'DialogoColoresUsados.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGOCOLORESUSADOS_H
#define UI_DIALOGOCOLORESUSADOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_DialogoColoresUsados
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboBoxColores;

    void setupUi(QDialog *DialogoColoresUsados)
    {
        if (DialogoColoresUsados->objectName().isEmpty())
            DialogoColoresUsados->setObjectName(QString::fromUtf8("DialogoColoresUsados"));
        DialogoColoresUsados->resize(400, 300);
        buttonBox = new QDialogButtonBox(DialogoColoresUsados);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        comboBoxColores = new QComboBox(DialogoColoresUsados);
        comboBoxColores->setObjectName(QString::fromUtf8("comboBoxColores"));
        comboBoxColores->setGeometry(QRect(100, 110, 201, 21));

        retranslateUi(DialogoColoresUsados);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogoColoresUsados, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogoColoresUsados, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogoColoresUsados);
    } // setupUi

    void retranslateUi(QDialog *DialogoColoresUsados)
    {
        DialogoColoresUsados->setWindowTitle(QApplication::translate("DialogoColoresUsados", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogoColoresUsados: public Ui_DialogoColoresUsados {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGOCOLORESUSADOS_H
