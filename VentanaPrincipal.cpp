#include "VentanaPrincipal.h"
#include <QString>
#include <QToolBar>
#include <QStatusBar>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QStringList>
#include <QVariant>
#include <QColor>
#include <QPalette>


VentanaPrincipal::VentanaPrincipal(QWidget *parent) : QMainWindow(parent)
{

	setWindowIcon(QIcon("../../../Imatges/capa.png"));

	creaAcciones();
	creaMenus();

	dialogoBuscar = NULL;
	dialogoDeshacer = NULL;
	dialogoEstablecerColor = NULL;
	dialogoColoresUsados = NULL;

	resize(600, 400);
}

/*FUNCIONES*********************************************************************************************************************************************************/

void VentanaPrincipal::creaAcciones()
{
	accionSalir = new QAction("Salir");
	accionGuardar = new QAction("Guardar");
	accionNuevo = new QAction("Nuevo");
	accionAbrir = new QAction("Abrir");
	accionGuardarComo = new QAction("Guardar como");
	accionBuscar = new QAction("Buscar");
	accionDeshacer = new QAction("Deshacer");
	accionEstablecerColor = new QAction("Establecer color");

	for (int i = 0; i < MAX_FICHEROS_RECIENTES; i++)
	{
		accionesFicherosRecientes[i] = new QAction("");
		accionesFicherosRecientes[i]->setVisible(false);
	}

	accionSalir->setIcon(QIcon("../../../Imatges/salir.png"));
	accionSalir->setShortcut(QKeySequence::Quit);

	accionGuardar->setIcon(QIcon("../../../Imatges/guardar.png"));
	accionGuardar->setShortcut(QKeySequence::Save);

	accionNuevo->setIcon(QIcon("../../../Imatges/add.png"));
	accionNuevo->setShortcut(QKeySequence::New);

	accionAbrir->setIcon(QIcon("../../../Imatges/abrir.png"));
	accionAbrir->setShortcut(QKeySequence::Open);

	accionGuardarComo->setIcon(QIcon("../../../Imatges/apoyo.png"));
	accionGuardarComo->setShortcut(QKeySequence::SaveAs);

	accionBuscar->setIcon(QIcon("../../../Imatges/salir.png"));
	accionBuscar->setShortcut(QKeySequence::Find);

	accionDeshacer->setIcon(QIcon("../../../Imatges/salir.png"));
	accionDeshacer->setShortcut(QKeySequence::Find);

	connect(accionSalir, SIGNAL(triggered()),
			this, SLOT(close()));

	connect(accionGuardar, SIGNAL(triggered()),
			this, SLOT(slotGuardar()));

	connect(accionNuevo, SIGNAL(triggered()),
			this, SLOT(slotNuevo()));

	connect(accionAbrir, SIGNAL(triggered()),
			this, SLOT(slotAbrir()));

	connect(accionGuardarComo, SIGNAL(triggered()),
			this, SLOT(slotGuardarComo()));

	connect(accionBuscar, SIGNAL(triggered()),
			this, SLOT(slotDialogoBuscar()));

	connect(accionDeshacer, SIGNAL(triggered()),
			this, SLOT(slotDialogoDeshacer()));

	connect(accionEstablecerColor, SIGNAL(triggered()),
			this, SLOT(slotDialogoEstablecerColor()));

	for (int i = 0; i < MAX_FICHEROS_RECIENTES; i++)
	{
		connect(accionesFicherosRecientes[i], SIGNAL(triggered()),
				this, SLOT(slotFicherosRecientes()));
	}
}

void VentanaPrincipal::creaMenus()
{

	/*MENU PRINCIPAL *****************************************************************************************/
	texto = new QTextEdit(this);
	setCentralWidget(texto);
	QMenuBar *barra = menuBar();
	fileMenu = barra->addMenu(QString("File"));
	menuEditar = barra->addMenu(QString("Editor"));
	menuConfiguracion = barra->addMenu("Configuracion");

	/*MENU GENERAL********************************************************************************************/
	texto->addAction(accionSalir);
	texto->addAction(accionNuevo);

	texto->setContextMenuPolicy(Qt::ActionsContextMenu);

	/* MENU CONTEXTUAL****************************************************************************************/

	QToolBar *barraArchivo = addToolBar("Archivo");
	QToolBar *barraSalir = addToolBar("Salir");

	barraArchivo->addAction(accionNuevo);
	barraArchivo->addAction(accionGuardar);
	barraArchivo->addAction(accionGuardarComo);
	barraArchivo->addAction(accionAbrir);

	barraSalir->addAction(accionSalir);

	/*SUB-MENU file *****************************************************************************************/

	fileMenu->addAction(accionSalir);
	fileMenu->addAction(accionGuardar);
	fileMenu->addAction(accionNuevo);
	fileMenu->addAction(accionAbrir);
	fileMenu->addAction(accionGuardarComo);

	for (int i = 0; i < MAX_FICHEROS_RECIENTES; i++)
	{
		fileMenu->addAction(accionesFicherosRecientes[i]);
	}

	menuEditar->addAction(accionBuscar);
	menuEditar->addAction(accionDeshacer);

	menuConfiguracion->addAction(accionEstablecerColor);

	/*BARRA DE ESTADO ***************************************************************************************/

	labelEstado = new QLabel("Aplicacion lista para usted");
	statusBar()->addWidget(labelEstado);
}

void VentanaPrincipal::abrirArchivo(QString ruta)
{

	QFile archivo(ruta);

	if (!archivo.open(QIODevice::ReadOnly))
	{
		QMessageBox::warning(this, "Editor", "Error al abrir archivo");
	}

	texto->document()->clear();
	QTextStream stream(&archivo);

	while (!stream.atEnd())
	{
		texto->append(stream.readLine());
	}
	nombreArchivo = ruta;
	setWindowTitle(nombreArchivo);
	establecerFicheroActual(ruta);
}

void VentanaPrincipal::guardarComo(QString ruta)
{

	QFile archivo(ruta);

	if (!archivo.open(QIODevice::WriteOnly))
	{
		QMessageBox::warning(this, "Editor", "Error al guardar archivo");
	}

	QTextStream stream(&archivo);

	stream << texto->document()->toPlainText();
	establecerFicheroActual(ruta);
	archivo.close();
}

void VentanaPrincipal::establecerFicheroActual(const QString &nuevaRuta)
{

	nombresFicherosRecientes.removeAll(nuevaRuta);
	nombresFicherosRecientes.prepend(nuevaRuta);
	nombreArchivo = nuevaRuta;

	QString nombreCorto = QFileInfo(nuevaRuta).fileName();

	for (int i = 0; i < MAX_FICHEROS_RECIENTES; i++)
	{
		accionesFicherosRecientes[i]->setVisible(false);
	}

	for (int i = 0; i < nombresFicherosRecientes.length() && i < MAX_FICHEROS_RECIENTES; i++)
	{
		QString rutaMirada = nombresFicherosRecientes[i];
		QString nombreCorto = QFileInfo(rutaMirada).fileName();
		accionesFicherosRecientes[i]->setText(nombreCorto);
		accionesFicherosRecientes[i]->setVisible(true);
		QVariant dato(rutaMirada);
		accionesFicherosRecientes[i]->setData(dato);
	}
}

/*SLOTS*********************************************************************************************************************************************************/

void VentanaPrincipal::slotNuevo()
{
	QMessageBox::StandardButton botonPulsado;
	botonPulsado = QMessageBox::warning(this, "Editor", "¿Estás seguro de que deseas borrar?", QMessageBox::Yes | QMessageBox::No);
	if (botonPulsado == QMessageBox::Yes)
	{
		texto->clear();
	}
}

void VentanaPrincipal::slotAbrir()
{

	QString ruta = QFileDialog::getOpenFileName(this, tr("Editor", "Abrir"), tr("Images (*.png *.xpm *.jpg)"));

	QMessageBox::information(this, "Editor", QString("Vas abrir:\n") + ruta + QString("...lo tienes claro"), QMessageBox::Yes);

	if (!ruta.isEmpty())
	{
		abrirArchivo(ruta);
	}
}

void VentanaPrincipal::slotGuardarComo()
{
	QString ruta = QFileDialog::getSaveFileName(this, tr("Editor", "Abrir"), tr("Images (*.png *.xpm *.jpg)"));

	QMessageBox::information(this, "Editor", QString("Vas guardar:\n") + ruta + QString("...lo tienes claro"), QMessageBox::Yes);

	if (!ruta.isEmpty())
	{
		guardarComo(ruta);
	}
}

void VentanaPrincipal::slotGuardar()
{

	if (nombreArchivo.isEmpty())
		return slotGuardarComo();
	guardarComo(nombreArchivo);
}

void VentanaPrincipal::slotFicherosRecientes()
{

	QString textoEntrada;

	QObject *culpable = sender();
	QAction *aC = qobject_cast<QAction *>(culpable);
	textoEntrada = aC->text();
	//qDebug() << "la entrada de menu que has pinchado" << textoEntrada;

	QVariant dato = aC->data();

	QString rutaCompleta = dato.toString();

	abrirArchivo(rutaCompleta);
}

void VentanaPrincipal::slotDialogoBuscar()
{

	if (dialogoBuscar == NULL)
	{
		dialogoBuscar = new FindDialog(this);

		connect(dialogoBuscar, SIGNAL(findNext(const QString &, Qt::CaseSensitivity)),
				this, SLOT(slotBuscarSiguiente(const QString &, Qt::CaseSensitivity)));
	}

	/*MODAL = bloquea la vida
	dialogoBuscar->exec();
	*/

	//NO MODAL
	dialogoBuscar->show();
}

void VentanaPrincipal::slotDialogoEstablecerColor()
{

	if (dialogoEstablecerColor == NULL)
	{
		dialogoEstablecerColor = new DialogoEstablecerColor(this);

		
	}

	dialogoEstablecerColor->show();
}

void VentanaPrincipal::slotDialogoColoresUsados(){

	if (dialogoEstablecerColor == NULL)
	{
		dialogoEstablecerColor = new DialogoEstablecerColor(this);

		
	}

	dialogoEstablecerColor->show();

}

void VentanaPrincipal::slotBuscarSiguiente(const QString &str, Qt::CaseSensitivity cs)
{

	//qDebug() << "La cadena que me han pasado es: " << str;

	if (!texto->find(str))
	{
		texto->moveCursor(QTextCursor::Start);
	}
}

void VentanaPrincipal::slotDialogoDeshacer()
{

	if (dialogoDeshacer == NULL)
	{
		dialogoDeshacer = new DialogoDeshacer(this);
		connect(dialogoDeshacer, SIGNAL(findNext(const QString &, Qt::CaseSensitivity)),
				this, SLOT(slotDialogoDeshacerConecta(const QString &, Qt::CaseSensitivity)));
	}

	dialogoDeshacer->show();
}

void VentanaPrincipal::slotDialogoDeshacerConecta(const QString &str, Qt::CaseSensitivity cs)
{
	qDebug() << "Comunicando" << str;
}

