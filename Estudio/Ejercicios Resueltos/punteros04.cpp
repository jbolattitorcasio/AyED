#include <iostream>

using namespace std;

int *ordenar(int *p, int n);

int main()
{
    int n, i, *p;
    cout << "Ingrese el tamaño del array: " << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Ingrese los " << n << " valores del array:" << endl;
    for(i=0;i<n;i++)
    {
        cout << "Valor posicion [" << i << "]: ";
        cin >> arr[i];
    }

    p = ordenar(arr, n);

    for(i=0;i<n;i++)
    {
        cout << *(p+i) << endl;
    }

    delete arr;
    return 0;
}

int *ordenar(int *p, int n)
{
    int i, j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+j) < *(p+i))
            {
                int aux = *(p+j);
                *(p+j) = *(p+i);
                *(p+i) = aux;
            }
        }
    }
    return p;
}
