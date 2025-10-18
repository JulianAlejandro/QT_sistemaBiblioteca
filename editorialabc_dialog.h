#ifndef EDITORIALABC_DIALOG_H
#define EDITORIALABC_DIALOG_H

#include <QDialog>

namespace Ui {
class EditorialABC_Dialog;
}

class QSqlTableModel;

class EditorialABC_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit EditorialABC_Dialog(QWidget *parent = nullptr);
    ~EditorialABC_Dialog();

private slots:
    void on_actionAlta_triggered();

    void on_actionBaja_triggered();

private:
    Ui::EditorialABC_Dialog *ui;
    QSqlTableModel *mModel;
};

#endif // EDITORIALABC_DIALOG_H
