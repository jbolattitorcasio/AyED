#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, x1, x2;
    cout << "Ingrese los valores a, b y c de una ecuacion cuadratica: " << endl;
    cin >> a >> b >> c;
    x1= ((-b+sqrt(pow(b, 2)-4*a*c))/2*a);
    x2= ((-b-sqrt(pow(b, 2)-4*a*c))/2*a);
    if ((pow(b, 2)-4*a*c) >= 0) {
        cout << "Los ceros de la funcion (raices) son : " << x1 << " y " << x2 << endl;
    } else {
        cout << "No hay raices posibles" << endl;
    }
    return 0;
}
