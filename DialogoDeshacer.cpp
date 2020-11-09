#include "DialogoDeshacer.h"

DialogoDeshacer::DialogoDeshacer(QWidget * parent) : QDialog(parent){
    setupUi(this);

connect(botonDeshacer, SIGNAL(clicked()),
			this, SLOT(slotBotonDeshacer()));

}

    

void DialogoDeshacer::slotBotonDeshacer(){

}

void DialogoDeshacer::slotBotonRehacer(){

}