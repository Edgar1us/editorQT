#include "DialogoEstablecerColor.h"
#include <QDebug>

DialogoEstablecerColor::DialogoEstablecerColor(QWidget * parent) : QDialog(parent)
{
    setupUi(this);
    QTextEdit *pEditor;
    punteroATextEdit = pEditor;    
    //paletaOriginal = punteroATextEdit->
    
    connect(botonElegir,SIGNAL(clicked()),
            this,SLOT(slotBotonElegir()));
    connect(botonProbar,SIGNAL(clicked()),
            this,SLOT(slotBotonProbar()));
}


void DialogoEstablecerColor::hideEvent(QHideEvent * event){


    qDebug() << "Evento hide";
    if (this->result()==Accepted)
    {
        slotBotonProbar();
    }else
    {
        punteroATextEdit->setPalette(paletaOriginal);
    }
    

}

void DialogoEstablecerColor::closeEvent(QCloseEvent * event){
    qDebug() << "Close event";
}

void DialogoEstablecerColor::slotBotonElegir()
{

    QColorDialog d;
    colorElegido = d.getColor();
    
}

void DialogoEstablecerColor::slotBotonProbar()
{

   /* QPalette p = punteroATextEdit->palette();

    p.setColor(QPalette::Base, colorElegido);
    p.setColor(QPalette::Text, Qt::magenta);
    punteroATextEdit->setPalette(p);*/

}