#include "civilizacion.h"

Civilizacion :: Civilizacion()
{
    nombre = "-";
    ubicacionx = "-";
    ubicaciony = "-";
    puntuacion = "-";
}

    Civilizacion :: Civilizacion(const string &nombre,
                                const string &ubicacionx,
                                const string &ubicaciony,
                                const string &puntuacion)
    {
            this->nombre = nombre;
            this->ubicacionx = ubicacionx;
            this->ubicaciony = ubicaciony;
            this->puntuacion = puntuacion;
    }

void Civilizacion::setNombre(const string &valor)
{
    nombre = valor;
}

string Civilizacion::getNombre() const
{
    return nombre;
}

void Civilizacion::setUbicacionX(const string &valor)
{
    ubicacionx = valor;
}

string Civilizacion::getUbicacionX() const
{
    return ubicacionx;
}

void Civilizacion::setUbicacionY(const string &valor)
{
    ubicaciony = valor;
}

string Civilizacion::getUbicacionY() const
{
    return ubicaciony;
}

void Civilizacion::setPuntuacion(const string &valor)
{
    puntuacion = valor;
}

string Civilizacion::getPuntuacion() const
{
    return puntuacion;
}