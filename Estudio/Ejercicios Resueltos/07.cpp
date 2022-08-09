#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Ingrese el angulo a, b, y c" << endl;
    cin >> a >> b >> c;
    if ((a+b+c) == 180) {
        cout << "Es un triangulo" << endl;
    } else {
        cout << "No es un triangulo" << endl;
    }
    return 0;
}
