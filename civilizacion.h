#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <iostream>
#include<iomanip>
using namespace std;

class Civilizacion
{
public:
    Civilizacion();
    Civilizacion(const string &nombre,
                const string &ubicacionx,
                const string &ubicaciony,
                const string &puntuacion);

    void setNombre(const string &valor);
    string getNombre() const;

    void setUbicacionX(const string &valor);
    string getUbicacionX() const;

    void setUbicacionY(const string &valor);
    string getUbicacionY() const;

    void setPuntuacion(const string &valor);
    string getPuntuacion() const;

    friend ostream& operator<<(ostream &out, const Civilizacion &c)
    {
        out<<left;
        out<<setw(10)<<c.nombre;
        out<<setw(12)<<c.ubicacionx;
        out<<setw(12)<<c.ubicaciony;
        out<<setw(10)<<c.puntuacion;
        out<<endl;

        return out;
    }

    friend istream& operator>> (istream &in, Civilizacion &c)
    {
        cout<<"Nombre:";
        getline(cin, c.nombre);

        cout<<"Ubicacion X:";
        getline(cin, c.ubicacionx);

        cout<<"Ubicacion Y:";
        cin >> c.ubicaciony;

        cout<<"Puntuacion:";
        cin >> c.puntuacion;

        return in;
    }
    bool operator==(const Civilizacion& c)
    {
        return nombre == c.nombre;
    }

    bool operator==(const Civilizacion& c) const
    {
        return nombre == c.nombre;
    }

    bool operator<(const Civilizacion& c)
    {
        return nombre < c.nombre;
    }

    bool operator<(const Civilizacion& c) const
    {
        return nombre < c.nombre;
    }

private:
    string nombre;
    string ubicacionx;
    string ubicaciony;
    string puntuacion;

};

#endif