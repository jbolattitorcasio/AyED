#include <iostream>

using namespace std;

int main()
{
    int a,m,d;
    cout << "Ingrese año:" << endl;
    cin >> a;
    cout << "Ingrese mes:" << endl;
    cin >> m;
    cout << "Ingrese dia:" << endl;
    cin >> d;
    cout << a*10000+m*100+d << endl;
    return 0;
}
