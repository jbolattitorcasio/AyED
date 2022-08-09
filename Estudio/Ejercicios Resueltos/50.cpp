#include <iostream>

using namespace std;

int descomponerHora(int hora)
{
    int result = 0;
    int hh = hora / 100;
    int mm = hora % 100;
    result = (hh*60) + mm;
    return result;
}

int main()
{
    int hora;
    cout << "Ingrese un numero en formato de HHMM: " << endl;
    cin >> hora;
    cout << "Pasaron " << descomponerHora(hora) << " minutos." << endl;
    return 0;
}
