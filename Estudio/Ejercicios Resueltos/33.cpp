#include <iostream>

using namespace std;

int mcd(int a, int b)
{
    int r;
    while()
    {
        r = a%b;
        if(r == 0)
        {
            return b;
        }
        a = b;
        b = r;
    }
    return 0;
}

int main()
{
    int a, b;
    cout << "Ingrese el valor A y B para calcular el Maximo Comun Divisor: " << endl;
    cin >> a >> b;
    mcd(a, b);
    cout << "el mcd es " << mcd << endl;

    return 0;
}
