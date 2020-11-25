#include <iostream>
#include "videogame.h"

using namespace std;

int main()
{
    VideoGame v;
    string op;

    while(true)
    {
        system("cls");
        cout << "----------MENU----------"<<endl;
        cout << v.getUsuario()<<endl;
        cout << "1) Nombre de usuario" << endl;
        cout << "2) Agregar civilizacion" << endl;
        cout << "3) Insertar" << endl;
        cout << "4) Inicializar" << endl;
        cout << "5) Primera civilizacion" << endl;
        cout << "6) Ultima civilizacion" << endl;
        cout << "7) Ordenar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Buscar" << endl;
        cout << "10) Modificar" << endl;
        cout << "11) Mostrar" << endl;
        cout << "12) Salir" << endl;
        cout << "Opcion: ";
        getline(cin, op);
        cout << endl;

        if (op == "1")
        {
            cin>>v;
        }
        else if(op=="2")
        {
            Civilizacion c;

            cin>>c;

            v.agregarcivilizacion(c);
            cin.ignore();
        }
        else if (op=="3")
        {
            Civilizacion c;

            cin>>c;

            size_t pos;
            cout << "Posicion: ";
            cin >> pos; cin.ignore();

            if(pos >= v.size())
            {
                cout << "Posicion no valida" <<endl;
            }
            else
            {
                v.insertar(c,pos);
            }
        }
        else if(op=="4")
        {
            Civilizacion c;

            cin>>c;
            size_t n;
            cout << "n: ";
            cin >> n; cin.ignore();

            v.crearcivilizacion(c, n);
        }
        else if(op=="5")
        {
            v.primeracivilizacion();
        }
        else if(op=="6")
        {
            v.ultimacivilizacion();
        }
        else if(op=="7")
        {
            while(true)
            {
                system("cls");
                cout << "**********MENU ORDENAMIENTOS**********" << endl;
                cout << "1) Ordenar por Nombre" << endl;
                cout << "2) Ordenar por Ubicacion X" << endl;
                cout << "3) Ordenar por Ubicacion Y" << endl;
                cout << "4) Ordenar por Puntuacion" << endl;
                cout << "5) Regresar" << endl;
                cout << "Opcion: ";
                getline(cin, op);

                if (op == "1")
                {
                    v.ordenar();
                }
                else if (op == "2")
                {
                    v.ordenarubicacionx();
                }
                else if (op == "3")
                {
                    v.ordenarubicaciony();
                }
                else if (op == "4")
                {
                    v.ordenarpuntuacion();
                }
                else if (op == "5")
                {
                    cout<<endl;
                    break;
                }
            }
        }
        else if(op=="8")
        {
            Civilizacion c;

            cin >> c; cin.ignore();

            Civilizacion *ptr = v.buscar(c);
            if (ptr == nullptr)
            {
                cout << "No encontrado" << endl;
            }
            else
            {
                v.eliminar(*ptr);
            }
        }
        else if(op=="9")
        {
            Civilizacion c;

            cin>>c; cin.ignore();

            Civilizacion *ptr = v.buscar(c);
            if (ptr == nullptr)
            {
                cout << "No encontrado" << endl;
            }
            else
            {
                cout << "----------------------------------------"<<endl;
                cout << left;
                cout<< setw(10)<< "NOMBRE";
                cout<< setw(12)<< "UBICACION X";
                cout<< setw(12)<< "UBICACION Y";
                cout<< setw(10)<< "POSICION";
                cout<<endl;
                cout << *ptr << endl;
            }
        }
        else if(op=="10")
        {
            v.modificar();
        }
        else if(op=="11")
        {
            v.mostrar();
        }
        else if(op=="12")
        {
            break;
        }
        else
        {
            cout << "Opcion no valida, vuelve a intentar: ";
        }
        cout<<endl;
        system("PAUSE");
    }
}
