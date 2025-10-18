#include "jabasedatos_SQL.h"
#include <QSqlError>

JaBaseDatos_SQL::JaBaseDatos_SQL()
{
    mDb = QSqlDatabase::addDatabase("QSQLITE");
    mDb.setDatabaseName("C:/Users/julia/JULIAN NO NUBE/sistemaBiblioteca.db");
}

bool JaBaseDatos_SQL::abrirConexion(QString &mensajeError){
    if (!mDb.open()){
        mensajeError = mDb.lastError().text();
        return false;
    }
    return true;
}

