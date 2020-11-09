#ifndef DIALOGODESHACER_H
#define DIALOGODESHACER_H

#include "ui_DialogoDeshacer.h"

class DialogoDeshacer : public QDialog, public Ui::DialogoDeshacer
{
    Q_OBJECT

public:
    DialogoDeshacer(QWidget * parent = 0);



private slots:
    void slotBotonDeshacer();
    void slotBotonRehacer();



};






#endif


