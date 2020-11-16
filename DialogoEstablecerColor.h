#ifndef DIALOGOESTABLECERCOLOR_H
#define DIALOGOESTABLECERCOLOR_H

#include "ui_DialogoEstablecerColor.h"
#include <QTextEdit>
#include <QColorDialog>
#include <QPalette>
#include <QColor>
#include <QVector>


class DialogoEstablecerColor : public QDialog, public Ui::DialogoEstablecerColor
{
    Q_OBJECT

public:
    DialogoEstablecerColor(QWidget * parent = 0);



private slots:
    void slotBotonElegir();
    void slotBotonProbar();

private:
    
    QTextEdit *punteroATextEdit;
    QColorDialog d;
    QColor colorElegido;
    QPalette paletaOriginal;
    QVector<QColor> listaColores;

    void hideEvent(QHideEvent * event);
    void closeEvent(QCloseEvent * event);

};






#endif


