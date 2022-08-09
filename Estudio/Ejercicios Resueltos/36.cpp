#include <iostream>

using namespace std;

void frac(int p, int q)
{
    int cant = 0;
    while((p%2 == 0) && (q%2 == 0))
    {
        p = p/2;
        q = q/2;
        cant++;
    }
    while((p%3 == 0) && (q%3 == 0))
    {
        p = p/3;
        q = q/3;
        cant++;
    }
    while((p%5 == 0) && (q%5 == 0))
    {
        p = p/5;
        q = q/5;
        cant++;
    }
    while((p%7 == 0) && (q%7 == 0))
    {
        p = p/7;
        q = q/7;
        cant++;
    }
    cout << "La fraccion al simplificarse queda " << p << "/" << q << endl;
    cout << "Y se simplifico " << cant << " veces." << endl;
    return;
}


int main()
{
    int p, q;
    cout << "Ingrese los valores P y Q de la fraccion P/Q: " << endl;
    cin >> p >> q;
    frac(p, q);
    return 0;
}
