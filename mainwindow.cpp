#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "autorabc_dialog.h"
#include "editorialabc_dialog.h"
#include "libroabc_dialog.h"
#include <QMessageBox>
#include "libroconsultadialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    //, mBaseDatos()
{
    ui->setupUi(this);
    QString mensajeError;
    if(!mBaseDatos.abrirConexion(mensajeError)){
        QMessageBox::critical(this, tr("Error"), mensajeError);
        close();
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuitar_aplicacion_triggered()
{
    close();
}


void MainWindow::on_actionLibroABC_triggered()
{
    LibroABC_Dialog d(this);
    d.exec();
}


void MainWindow::on_actionAutorABC_triggered()
{
    AutorABC_Dialog d(this);
    d.exec();
}


void MainWindow::on_actionEditorialABC_triggered()
{
    EditorialABC_Dialog d(this);
    d.exec();
}


void MainWindow::on_actionLibroconsulta_triggered()
{
    LibroConsultaDialog d(this);
    d.exec();
}

