#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void mostrarMenu(int &opcionMenu);
void cargarArchivo(float valor);
void modificarArchivo();
void leerArchivo();

int main()
{
    //char ruta[] = "ejercicio.ayed";
    float valor;
    int opcionMenu;



    mostrarMenu(opcionMenu);
    while(opcionMenu != 0)
    {
        switch(opcionMenu)
        {
        case 1:
            cargarArchivo(valor);
            break;
        case 2:
            modificarArchivo();
            break;
        case 3:
            leerArchivo();
            break;
        default:
            break;
        }

        mostrarMenu(opcionMenu);
    }

    return 0;
}

void cargarArchivo(float valor)
{
    int n;
    cout << "Ingrese la cantidad de numero que va a escribir: " << endl;
    cin >> n;

    FILE *f;
    int i;
    f = fopen("ejercicio.ayed", "ab");
    for(i=0;i<n;i++)
    {
        cout << "Ingrese el valor " << i+1 << ":" << endl;
        cin >> valor;
        fwrite(&valor,sizeof(float),1,f);
    }
    fclose(f);
    return;
}

void modificarArchivo()
{
    cout << "---------------------------------" << endl;
    leerArchivo();
    cout << "---------------------------------" << endl;

    FILE *f;
    int n, tam, cantidad;
    float valor;
    f = fopen("ejercicio.ayed", "rb+");

    cout << "Ingrese el numero del valor que quiere modificar: " << endl;
    cin >> n;

    fseek(f,0, SEEK_END);
    tam = ftell(f);
    cantidad = tam /sizeof(float);
    if (n>cantidad)
        cout << "Error, no existe n" << endl;
    else
    {
        cout << "Ingrese el nuevo valor" << endl;
        cin >> valor;
        fseek(f,sizeof(float)*(n-1), SEEK_SET);
        fwrite(&valor,sizeof(float),1,f);
    }
    fclose(f);
    return;
}

void leerArchivo()
{
    cout << "Los valores son: " << endl;
    FILE *f;
    int i = 1;
    float valor;
    f = fopen("ejercicio.ayed", "rb");
    fread(&valor,sizeof(float),1,f);
    while (!feof(f))
    {
        cout << "El valor numero " << i << " es: " << valor << endl;
        fread(&valor,sizeof(int),1,f);
        i++;
    }
    fclose(f);
    return;
}

void mostrarMenu(int &opcionMenu)
{
    opcionMenu = -1;

    cout << "---------------------------------" << endl;
    cout << " 1 - Ingresar valores al archivo" << endl;
    cout << " 2 - Modificar valores del archivo" << endl;
    cout << " 3 - Mostrar el archivo" << endl;
    cout << " 0 - Cerrar el programa" << endl;
    cout << "---------------------------------" << endl;
    cin >> opcionMenu;
    return;
}
