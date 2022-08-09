#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Ingrese la primera fecha en formato AAAAMMDD" << endl;
    cin >> a;
    cout << "Ingrese la segunda fecha en formato AAAAMMDD" << endl;
    cin >> b;
    if (a>b) {
        cout << "la fecha mas reciente es " << a << endl;
    } else {
        cout << "la fecha mas reciente es " << b << endl;
    }
    return 0;
}
