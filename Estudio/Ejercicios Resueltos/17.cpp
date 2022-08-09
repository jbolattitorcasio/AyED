#include <iostream>

using namespace std;

int main()
{
    float valor;
    int a = 0, b = 0, c = 0, d = 0;

    cout << "Ingrese el sueldo (0 para terminar): " << endl;
    cin >> valor;

    while(valor != 0)
    {
        if(valor < 1520)
        {
            a++;
        }
        else if(valor >= 1520 && valor < 2780)
        {
            b++;
        }
        else if(valor >= 2780 && valor < 5999)
        {
            c++;
        }
        else
        {
            d++;
        }

        cin >> valor;
    }

    cout << "Empleados que ganan menos $1.520: " << a << endl;
    cout << "Empleados que ganan entre $1.520 y $2.780: " << b << endl;
    cout << "Empleados que ganan entre $2.780 y $5.999: " << c << endl;
    cout << "Empleados que ganan mas $6.000: " << d << endl;

    return 0;
}
