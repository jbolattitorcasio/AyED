#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void cargarArchivo(int n, float valor);
void leerArchivo(float valor);

int main()
{
    int n;
    float valor;
    cout << "Ingrese la cantidad de numero que va a escribir: " << endl;
    cin >> n;
    cargarArchivo(n, valor);
    leerArchivo(valor);
    return 0;
}

void cargarArchivo(int n, float valor)
{
    FILE *f;
    int i;
    f = fopen("ejercicio.ayed", "wb");
    for(i=0;i<n;i++)
    {
        cout << "Ingrese el valor " << i+1 << ":" << endl;
        cin >> valor;
        fwrite(&valor,sizeof(float),1,f);
    }
    fclose(f);
    return;
}

void leerArchivo(float valor)
{
    cout << "Los valores son: " << endl;
    FILE *f;
    int i = 1;
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
