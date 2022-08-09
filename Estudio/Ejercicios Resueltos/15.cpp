#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    int i, tipoDeInfraccion;
    float valorDeLaMulta, sumaL, sumaM, sumaG;
    char gravedadDeLaInfraccion;
    char motivoDeLaInfraccion[300];
    int clausurarFabrica = 0;

    for(i = 1; i <= 5; i++) {
        cout << "Datos de la Infraccion n°" << i << endl;

        cout << "Ingrese tipo de infraccion (1, 2, 3 o 4):" << endl;
        cin >> tipoDeInfraccion;
        while(tipoDeInfraccion < 1 || tipoDeInfraccion > 4) {
            cout << "Error al ingresar el tipo de infraccion, porfavor ingrese un valor 1, 2, 3 o 4:" << endl;
            cin >> tipoDeInfraccion;
        }

        cout << "Ingrese el motivo de la infraccion: " << endl;
        fflush(stdin);
        gets(motivoDeLaInfraccion);

        cout << "Ingrese el valor de la multa: " << endl;
        cin >> valorDeLaMulta;
        while(valorDeLaMulta < 0) {
        cout << "Error al ingresar el valor de la multa, porfavor ingrese un valor positivo: " << endl;
        cin >> valorDeLaMulta;
        }

        cout << "Ingrese la gravedad de la infraccion (L, M o G): " << endl;
        cin >> gravedadDeLaInfraccion;
        while(gravedadDeLaInfraccion != 'L' && gravedadDeLaInfraccion != 'M' && gravedadDeLaInfraccion != 'G') {
        cout << "Error al ingresar la gravedad de la infraccion, porfavor ingrese L, M o G (Mayusculas): " << endl;
        cin >> gravedadDeLaInfraccion;
        }

        switch(gravedadDeLaInfraccion) {
            case 'L':
                sumaL += valorDeLaMulta;
                break;
            case 'M':
                sumaM += valorDeLaMulta;
                break;
            case 'G':
                sumaG += valorDeLaMulta;
                break;
        }
    }
        if ((tipoDeInfraccion == 3 || tipoDeInfraccion == 4) && (gravedadDeLaInfraccion == 'G')) {
            clausurarFabrica++;
        }

        cout << "Infracciones G a pagar: " << sumaG << endl;
        cout << "Infracciones M a pagar: " << sumaM << endl;
        cout << "Infracciones L a pagar: " << sumaL << endl;
        cout << "Total a pagar: " << sumaG + sumaM + sumaL << endl;

        if (clausurarFabrica >= 3) {
            cout << "----------CLAUSURAR FABRICA----------" << endl;
        }


    return 0;
}
