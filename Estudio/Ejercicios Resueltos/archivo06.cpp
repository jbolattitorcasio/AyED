#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//Estructuras
struct Alumno
{
    char nombre[50];
    char apellido[50];
    char legajo[9];
    char dni[9];
    int fecha;
};

//Funciones
void menu(int &opcionMenu);
void agregarAlumno();
void listarAlumno();
void mostrarAlumno(Alumno a);
void busLegajo();
bool buscarAlumnoLegajo(Alumno &a, char legajo[9]);
void busDni();
bool buscarAlumnoDni(Alumno &a, char dni[9]);

int main()
{
    int opcionMenu;
    menu(opcionMenu);
    while (opcionMenu != 0)
    {
        switch(opcionMenu)
        {
        case 1:
            agregarAlumno();
            break;
        case 2:
            listarAlumno();
            break;
        case 3:
            busLegajo();
            break;
        case 4:
            busDni();
            break;
        case 5:
            break;
        default:
            break;
        }

        menu(opcionMenu);
    }
    return 0;
}

void menu(int &opcionMenu)
{
    opcionMenu = -1;

    cout << "-------------------------------------------------------" << endl;
    cout << "Por favor seleccione una opcion:" << endl;
    cout << "1 - Agregar un alumno" << endl;
    cout << "2 - Listar todos los alumnos" << endl;
    cout << "3 - Buscar alumno por legajo" << endl;
    cout << "4 - Buscar alumno por DNI" << endl;
    cout << "5 - Ordenar archivo por legajo" << endl;
    cout << "0 - Salir del programa" << endl;
    cout << "-------------------------------------------------------" << endl;

    cin >> opcionMenu;
    return;
}

void agregarAlumno()
{
    FILE *f;
    Alumno alumno;
    if(f = fopen("archivos7.ayed", "ab"))
    {
        cout << "-----------Agregando alumno-----------" << endl;
        cout << "Ingrese el nombre del alumno:" << endl;
        cin >> alumno.nombre;
        cout << "Ingrese el apellido del alumno:" << endl;
        cin >> alumno.apellido;
        cout << "Ingrese el legajo (numeros seguidos) del alumno:" << endl;
        cin >> alumno.legajo;
        cout << "Ingrese el DNI del alumno:" << endl;
        cin >> alumno.dni;
        cout << "Ingrese la fecha de nacimiento (AAAAMMDD):" << endl;
        cin >> alumno.fecha;
        fwrite(&alumno,sizeof(Alumno),1,f);
        fclose(f);
    } else {
        cout <<  "Error al agregar un alumno" << endl;
        cout << "" << endl;
        cout <<  "Posible error: el programa no tiene derecho de escritura." << endl;
    }
    return;
}

void listarAlumno()
{
    FILE *f;
    Alumno alumno;
    if(f = fopen("archivos7.ayed", "rb"))
    {
        while(fread(&alumno,sizeof(Alumno),1,f))
        {
            mostrarAlumno(alumno);
        }
        fclose(f);
    }
    return;
}

void mostrarAlumno(Alumno a)
{
    cout << "----- Alumno " << a.legajo << " -----" << endl;
    cout << "Nombre: " << a.nombre << "." << endl;
    cout << "Apellido: " << a.apellido << "." << endl;
    cout << "DNI: " << a.dni << "." << endl;
    cout << "Fecha de Nacimiento: " << a.fecha << "." << endl;
    return;
}

void busLegajo()
{
    Alumno a;
    char legajo[9];
    cout << "---------- Buscando Alumno por Legajo ----------" << endl;
    cout << "Ingrese el numero de legajo que desea buscar: ";
    cin >> legajo;
    if (buscarAlumnoLegajo(a, legajo))
        mostrarAlumno(a);
    else
        cout << "El alumno no está en el archivo." << endl;

    return;
}

bool buscarAlumnoLegajo(Alumno &a, char legajo[9])
{
    FILE *f;
    bool encon = false;
    if(f = fopen("archivos7.ayed", "rb"))
    {
        while (!encon && fread(&a, sizeof(Alumno),1, f))
        {
            if (strcmp(a.legajo,legajo) == 0)
                encon = true;
        }
        fclose(f);
    }
    return encon;
}

void busDni()
{
    Alumno a;
    char dni[9];
    cout << "---------- Buscando Alumno por DNI ----------" << endl;
    cout << "Ingrese el numero de DNI que desea buscar: ";
    cin >> dni;
    if (buscarAlumnoDni(a, dni))
        mostrarAlumno(a);
    else
        cout << "El alumno no está en el archivo." << endl;

    return;
}

bool buscarAlumnoDni(Alumno &a, char dni[9])
{
        FILE *f;
    bool encon = false;
    if(f = fopen("archivos7.ayed", "rb"))
    {
        while (!encon && fread(&a, sizeof(Alumno),1, f))
        {
            if (strcmp(a.dni,dni) == 0)
                encon = true;
        }
        fclose(f);
    }
    return encon;
}
