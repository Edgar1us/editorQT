#ifndef DIALOGOESTABLECERCOLOR_H
#define DIALOGOESTABLECERCOLOR_H

#include "ui_DialogoEstablecerColor.h"
#include <QTextEdit>
#include <QColorDialog>

class DialogoEstablecerColor : public QDialog, public Ui::DialogoEstablecerColor
{
    Q_OBJECT

public:
    DialogoEstablecerColor(QWidget * parent = 0);



private slots:
    void slotBotonElegir();
    void slotBotonProbar();

private:
    
    QTextEdit * editorCentral;
    QColorDialog d;

};






#endif


