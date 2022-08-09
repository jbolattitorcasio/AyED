#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#define LONG 100

using namespace std;

//structs
struct Alumno
{
    int documento;
    string tipoDocumento;
    string nombre;
    int legajo;
    float promedio;
};

//funciones
void inicializar(Alumno v[]);
void menu(int &opcionMenu);
void leer(Alumno v[]);

int main()
{
    Alumno v[LONG];
    Alumno dato;
    int opcionMenu;

    menu(opcionMenu);

    while (opcionMenu != 0)
    {
        switch(opcionMenu)
        {
        case 1:
                inicializar(v);
            break;
        case 2:
                cout << "Ingrese los datos del estudiante" << endl;
                leer(dato);
            break;
        default:
            break;
        }
    }


    cout << "" << endl;
    return 0;
}

void inicializar(Alumno v[])
{
    int i;
    for(i=0;i < LONG;i++)
    {
        v[i].documento = -1;
    }
    return;
}

void leer(Alumno &d)
{
    cout << "Ingrese el numero de legajo:" << endl;
    cin >> d.legajo;
    cout << "Ingrese el tipo de documento:" << endl;
    cin >> d.tipoDocumento;
    cout << "Ingrese el numero de documento:" << endl;
    cin >> d.documento;
    cout << "Ingrese el nombre del alumno:" << endl;
    cin >> d.nombre;
    cout << "Ingrese su nota promedio:" << endl;
    cin >> d.promedio;
    return;
}

void menu(int &opcionMenu)
{
    opcionMenu = -1;

    cout << "-------------------------------------------------------" << endl;
    cout << "Por favor seleccione una opcion:" << endl;
    cout << "1 - Inicializar la lista (vaciarla)" << endl;
    cout << "2 - Ingresar un nuevo alumno" << endl;
    cout << "0 - Salir del programa" << endl;
    cout << "-------------------------------------------------------" << endl;

    cin >> opcionMenu;
    return;
}
