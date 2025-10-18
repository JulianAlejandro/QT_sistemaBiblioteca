#include "jabasedatos.h"
#include <QSqlError>

JaBaseDatos::JaBaseDatos(const QString &nombreBaseDatos,
                         const QString &nombreUsuario,
                         const QString &contraseñaUsuario,
                         const QString &direccionServidor,
                         int puertoConexion)
{
    mDb = QSqlDatabase::addDatabase("QMYSQL");
    mDb.setDatabaseName(nombreBaseDatos);
    mDb.setUserName(nombreUsuario);
    mDb.setPassword(contraseñaUsuario);
    mDb.setHostName(direccionServidor);
    mDb.setPort(puertoConexion);
}

bool JaBaseDatos::abrirConexion(QString &mensajeError){
    if (!mDb.open()){
        mensajeError = mDb.lastError().text();
        return false;
    }
    return true;
}

