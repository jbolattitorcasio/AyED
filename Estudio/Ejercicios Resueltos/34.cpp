#include <iostream>

using namespace std;

int factorial(int a,  bool &error)
{
    int resultado = 1;

    if(a >= 0)
    {
        error = false;

        for(int i=1;i<=a;i++)
        {
            resultado*=i;
        }
        return resultado;


    }
    else
    {
        error = true;
    }
}

int main()
{
    int a, r;
    bool err;
    cout << "Ingrese un numero entero positivo: " << endl;
    cin >> a;
    r = factorial(a, err);
    if(!err)
    {
         cout << "Su factorial es el " << r << endl;
    }
    else
    {
        cout << "Puso un numero menor a 0" << endl;
    }


    return 0;
}
