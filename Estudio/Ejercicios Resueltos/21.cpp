#include <iostream>

using namespace std;

int main()
{
    int i, n;
    int nro, mayor, posmayor, menor, posmenor;
    cout << "Ingrese la cantidad de valores a leer:" << endl;
    cin >> n;
    for (i=1; i <= n; i++)
    {
        cout << "Ingrese un valor:" << endl;
        cin >> nro;
        if (nro > mayor || i == 1)
        {
            mayor = nro;
            posmayor = i;
        }
        if (nro < menor || i == 1)
        {
            menor = nro;
            posmenor = i;
        }
    }
    cout << "Mayor: " << mayor << ", aparece en la posición: " << posmayor << endl;
    cout << "Menor: " << menor << ", aparece en la posición: " << posmenor << endl;
    return 0;
}
