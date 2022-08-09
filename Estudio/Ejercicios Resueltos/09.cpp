#include <iostream>

using namespace std;

int main()
{
    int m, a, x;
    cout << "Ingrese numero del Mes:" << endl;
    cin >> m;
    cout << "Ingrese Año:" << endl;
    cin >> a;
    if (m <= 12) {
        if ((a%4 == 0) && (m == 2)) {
            x = 28;
        } else if ((m%2 == 0) && (m != 2)) {
            x = 30;
        } else {
            x = 31;
        }

        cout << "El mes " << m << " del año " << a << " tiene " << x << " dias." << endl;
    } else {
        cout << "El mes que ingreso no existe." << endl;
    }


    return 0;
}
