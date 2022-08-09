#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    int arr[5];
    int i;
    int *p = arr;

    cout << "Ingrese los 5 valores enteros: " << endl;
    for(i=0;i<5;i++)
    {
        cout << "Valor numero " << i+1 << " : ";
        cin >> *(p+i);
    }
    cout << "------------------------------" << endl;
    cout << "Usted Ingreso:" << endl;
    for(i=0;i<5;i++)
    {
        cout << "Valor numero " << i+1 << " : " << arr[i] << "." << endl;
    }

    return 0;
}
