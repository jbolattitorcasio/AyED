#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Ingrese un valor: " << endl;
    cin >> a;
    cout << "la quinta parte de " << a << " es " << a/5 << endl;
    cout << "y su resto multiplicado por 5 es " << a%5 << endl;
    cout << "y la septima parte de la quinta parte es " << (a/5)/7 << endl;
    return 0;
}
