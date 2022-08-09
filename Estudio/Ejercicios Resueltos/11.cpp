#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Ingrese su edad:" << endl;
    cin >> a;
    if (a <= 12) {
        cout << "menor" << endl;
    } else if ((a >= 13) && (a <= 18)) {
        cout << "cadete" << endl;
    } else if ((a > 18) && (a <= 26)) {
        cout << "juvenil" << endl;
    } else {
        cout << "mayor" << endl;
    }
    return 0;
}
