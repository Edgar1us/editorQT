#ifndef DIALOGOCOLORESUSADOS_H
#define DIALOGOCOLORESUSADOS_H

#include "ui_DialogoColoresUsados.h"

class DialogoColoresUsados : public QDialog, public Ui::DialogoColoresUsados
{

    Q_OBJECT

public:
    DialogoColoresUsados(QWidget * parent = 0);



private slots:
    void slotBotonElegir();
    void slotBotonProbar();

private:
    
    

};

#endif