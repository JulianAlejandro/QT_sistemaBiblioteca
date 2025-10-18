#include "autorabc_dialog.h"
#include "ui_autorabc_dialog.h"
#include <QSqlTableModel>

enum ColumnaAutor{
    ID,
    NOMBRE
};

AutorABC_Dialog::AutorABC_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AutorABC_Dialog)
{
    ui->setupUi(this);
    mModel = new QSqlTableModel(this);
    mModel->setTable("autor");
    mModel->select();
    //mModel->setHeaderData(ID, Qt::Horizontal, "ID");
    //mModel->setHeaderData(NOMBRE, Qt::Horizontal, "Nombre");
    ui->tableView->setModel(mModel);

    ui->tableView->addActions({ui->actionAlta, ui->actionBaja});
}

AutorABC_Dialog::~AutorABC_Dialog()
{
    delete ui;
}

void AutorABC_Dialog::on_actionAlta_triggered()
{
    mModel->insertRow(mModel->rowCount());
}


void AutorABC_Dialog::on_actionBaja_triggered()
{
    mModel->removeRow(ui->tableView->currentIndex().row());
    mModel->select();
}

