#ifndef LIBROABC_DIALOG_H
#define LIBROABC_DIALOG_H

#include <QDialog>

namespace Ui {
class LibroABC_Dialog;
}

class QSqlRelationalTableModel;
class QSqlRelationalDelegate;

class LibroABC_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit LibroABC_Dialog(QWidget *parent = nullptr);
    ~LibroABC_Dialog();

private slots:
    void on_actionAlta_triggered();

    void on_actionBaja_triggered();

private:
    Ui::LibroABC_Dialog *ui;
    QSqlRelationalTableModel *mModel;
    QSqlRelationalDelegate *mDelegate;
};

#endif // LIBROABC_DIALOG_H
