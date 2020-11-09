#ifndef VENTANAPRINCIPAL_H
#define VENTANAPRINCIPAL_H


#include <QMainWindow>
#include <QTextEdit>
#include <QMenuBar>
#include <QMenu>
#include <QLabel>
#include <QMessageBox>
#include "findDialog.h"
#include "DialogoDeshacer.h"

class VentanaPrincipal : public QMainWindow {
Q_OBJECT
public:
	VentanaPrincipal(QWidget *parent = 0);
	static const int MAX_FICHEROS_RECIENTES = 5; 

private:
    QTextEdit *texto;
	QLabel *labelEstado;
	QMenuBar *barra;
	QMenu *fileMenu, *menuEditar;
	QAction *accionSalir, *accionNuevo, *accionGuardar, *accionAbrir, *accionGuardarComo, *accionesFicherosRecientes[MAX_FICHEROS_RECIENTES], *accionBuscar, *accionDeshacer;
	QString nombreArchivo;
	QStringList nombresFicherosRecientes;
	FindDialog * dialogoBuscar;
	DialogoDeshacer * dialogoDeshacer;

	void creaAcciones();
	void creaMenus();
	void abrirArchivo(QString);
	void guardarComo(QString);
	void establecerFicheroActual(const QString & nuevaRuta);

public slots:
    void slotNuevo();
	void slotAbrir();
	void slotGuardarComo();
	void slotGuardar();
	void slotFicherosRecientes();
	void slotDialogoBuscar();
	void slotBuscarSiguiente(const QString &str, Qt::CaseSensitivity cs);
	void slotDialogoDeshacer();
	void slotDialogoDeshacerConecta(const QString &str, Qt::CaseSensitivity cs);

};



#endif
