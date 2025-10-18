#ifndef LIBROCONSULTADIALOG_H
#define LIBROCONSULTADIALOG_H

#include <QDialog>

namespace Ui {
class LibroConsultaDialog;
}

class QSqlQueryModel;

class LibroConsultaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LibroConsultaDialog(QWidget *parent = nullptr);
    ~LibroConsultaDialog();

private:
    Ui::LibroConsultaDialog *ui;
    QSqlQueryModel *mModel;
};

#endif // LIBROCONSULTADIALOG_H
