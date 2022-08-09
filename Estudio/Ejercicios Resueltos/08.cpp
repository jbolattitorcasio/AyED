#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Ingrese los lados del triangulo:" << endl;
    cin >> a >> b >> c;
    if ((a == b) && (a == c)) {
        cout << "Es un triangulo Equilatero" << endl;
    } else if (((a == b) && (a != c)) || ((a != b) && (a == c)) || ((a != b) && (b == c))) {
        cout << "Es un triangulo Isoceles" << endl;
    } else {
        cout << "Es un triangulo escalonado" << endl;
    }


    return 0;
}
