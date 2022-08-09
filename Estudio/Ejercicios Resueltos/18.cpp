#include <iostream>

using namespace std;

int main()
{
    int m, cant = 0, num = 1;
    cout << "Ingrese un numero: " << endl;
    cin >> m;
    while(cant < m)
    {
        if(num%3==0 && num%5!=0)
        {
            cout << num << endl;
            cant++;
        }
        num++;
    }

    return 0;
}
