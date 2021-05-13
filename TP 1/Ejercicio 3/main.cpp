#include <iostream>

using namespace std;

int main()
{
    int k;
    cout << "Ingrese valor en Km/Hr " << endl;
    cin >> k;
    cout << k << " Km/Hr son " << ((k*1000)/3600) << " Mts/Seg" << endl;
    return 0;
}
