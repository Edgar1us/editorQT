#include "DialogoEstablecerColor.h"

DialogoEstablecerColor::DialogoEstablecerColor(QWidget *parent) : QDialog(parent)
{
    setupUi(this);

    /*editorCentral = new QTextEdit(this);
	setCentralWidget(editorCentral);*/

    connect(botonElegir, SIGNAL(clicked()),
            this, SLOT(slotBotonElegir()));
}

void DialogoEstablecerColor::slotBotonElegir()
{

    /*QColor color = QColor(d.exec());
    QPalette p = editorCentral->palette();

    p.setColor(QPalette::Base, color);
    p.setColor(QPalette::Text, Qt::magenta);
    editorCentral->setPalette(p);*/
}

void DialogoEstablecerColor::slotBotonProbar()
{
}