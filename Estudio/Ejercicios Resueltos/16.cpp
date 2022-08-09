#include <iostream>

using namespace std;

int main()
{
    int j = 0, valor;
    cout << "Ingresar Valores: " << endl;
    cin >> valor;
    while(valor >= 0)
    {
        j++;
        cin >> valor;
    }
    if(j == 0)
    {
        cout << "Error: No se ingreso ningun valor positivo." << endl;
    }
    else
    {
        cout << "Se ingresaron " << j << " valores positivos." << endl;
    }
    return 0;
}
