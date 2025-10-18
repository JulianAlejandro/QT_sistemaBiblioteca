#ifndef JABASEDATOS_SQL_H
#define JABASEDATOS_SQL_H

#include <QSqlDatabase>

class JaBaseDatos_SQL
{
public:
    JaBaseDatos_SQL();
    bool abrirConexion(QString &mensajeError);
private:
    QSqlDatabase mDb;
};

#endif // JABASEDATOS_SQL_H
