#include "editorialabc_dialog.h"
#include "ui_editorialabc_dialog.h"
#include <QSqlTableModel>

enum ColumnaEditorial{
    ID,
    NOMBRE
};

EditorialABC_Dialog::EditorialABC_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::EditorialABC_Dialog)
{
    ui->setupUi(this);
    mModel = new QSqlTableModel(this);
    mModel->setTable("editorial");
    mModel->select();
    mModel->setHeaderData(ID, Qt::Horizontal, "ID");
    mModel->setHeaderData(NOMBRE, Qt::Horizontal, "Nombre");
    ui->tableView->setModel(mModel);
    ui->tableView->addActions({ui->actionAlta, ui->actionBaja});
}

EditorialABC_Dialog::~EditorialABC_Dialog()
{
    delete ui;
}

void EditorialABC_Dialog::on_actionAlta_triggered()
{
    mModel->insertRow(mModel->rowCount());
}


void EditorialABC_Dialog::on_actionBaja_triggered()
{
    mModel->removeRow(ui->tableView->currentIndex().row());
    mModel->select();
}

