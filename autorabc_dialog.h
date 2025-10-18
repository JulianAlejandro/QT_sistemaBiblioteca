#ifndef AUTORABC_DIALOG_H
#define AUTORABC_DIALOG_H

#include <QDialog>

namespace Ui {
class AutorABC_Dialog;
}

class QSqlTableModel;

class AutorABC_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit AutorABC_Dialog(QWidget *parent = nullptr);
    ~AutorABC_Dialog();

private slots:
    void on_actionAlta_triggered();

    void on_actionBaja_triggered();

private:
    Ui::AutorABC_Dialog *ui;
    QSqlTableModel *mModel;
};

#endif // AUTORABC_DIALOG_H
