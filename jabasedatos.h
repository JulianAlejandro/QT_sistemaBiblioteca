#ifndef JABASEDATOS_H
#define JABASEDATOS_H

#include <QSqlDatabase>

class JaBaseDatos
{
public:
    JaBaseDatos(const QString &nombreBaseDatos,
                const QString &nombreUsuario,
                const QString &contraseñaUsuario,
                const QString &direccionServidor,
                int puertoConexion);
    bool abrirConexion(QString &mensajeError);
private:
    QSqlDatabase mDb;
};

#endif // JABASEDATOS_H
