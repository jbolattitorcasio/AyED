#include <iostream>

using namespace std;

int iva(int valorInicial)
{
    int result = 0;
    result = (valorInicial*21)/100;
    return result;
}

int minutosExcedidos(int minutosTotal, int minutosAbono)
{
    int result = 0;
    if(minutosAbono >= minutosTotal)
        return result;
    result = minutosTotal - minutosAbono;
    return result;
}

int costo(int costoAbono, int costoExceso, int minutosTotal, int minutosAbono)
{
    int result = 0;
    int exceso = 0;
    exceso = costoExceso * minutosExcedidos(minutosTotal, minutosAbono);
    result = costoAbono + exceso;
    result = result + iva(result);
    return result;
}

int main()
{
    int costoAbono, minutosAbono, costoExceso, minutosTotal;

    cout << "Ingrese el costo en pesos del abono telefonico: " << endl;
    cout << "$ ";
    cin >> costoAbono;

    cout << "Ingrese la cantidad de minutos libres que incluye el abono: " << endl;
    cin >> minutosAbono;

    cout << "Ingrese el cargo en pesos por minuto excedente: " << endl;
    cout << "$ ";
    cin >> costoExceso;

    cout << "Ingrese la cantidad de minutos utilizados por el abonado: " << endl;
    cin >> minutosTotal;

    cout << "El abonado se excedio " << minutosExcedidos(minutosTotal, minutosAbono) << " minutos." << endl;
    cout << "El abonado debera pagar un total de " << costo(costoAbono, costoExceso, minutosTotal, minutosAbono) << " $." << endl;


    return 0;
}
