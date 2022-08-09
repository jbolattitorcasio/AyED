#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Ingrese fecha en el formato AAAAMMDD:" << endl;
    cin >> a;
    cout << "Año: " << (a/10000) << endl;
    cout << "Mes: " << (a/100)-(a/10000)*100 << endl;
    cout << "Dia: " << a-((a/100)-(a/10000)*100)*100-((a/10000)*10000) << endl;
    return 0;
}
