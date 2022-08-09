#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int *mayor(int arr[], int n);

int main()
{
    int n, i, *p;
    cout << "Ingrese la cantidad de enteros que va a utilizar: " << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Ingrese los " << n << " valores enteros:" << endl;
    for(i=0;i<n;i++)
    {
        cout << "Valor numero " << i+1 << " : ";
        cin >> arr[i];
    }
    p = mayor(arr, n);
    cout << "El mayor numero de los " << n << " es el " << *p << endl;

    delete arr;
    return 0;
}

int *mayor(int arr[], int n)
{
    int *may = arr;
    int i;

    for(i=0;i<n;i++)
    {
        if(*may<*(may+i))
            *may = *(may+i);
    }
    return may;
}
