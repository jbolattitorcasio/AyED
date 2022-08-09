#include <iostream>

using namespace std;

int main()
{
    int i, mayor, n;
    cout << "Ingrese 10 valores: " << endl;
    for(i=0; i<=4; i++)
    {
        cin >> n;
        if(n >= mayor)
        {
            mayor = n;
        }
        else
        {
            mayor = mayor;
        }
    }

    cout << "El numero mas grande es: " << mayor << endl;

    return 0;
}
