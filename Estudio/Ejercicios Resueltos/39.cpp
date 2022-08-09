#include <iostream>

using namespace std;

void tiempo(int h1, int h2)
{
    int result, dia;
    result = h1 + h2;
    while(result >= 240000)
    {
        dia++;
        result = result - 240000;
    }
    cout << "Pasaron " << dia << " dias y " << result << " Horas." << endl;
    return;
}

int main()
{
    int h1, h2;
    cout << "Ingrese la hora inicial en formato HHMMSS: " << endl;
    cin >> h1;
    cout << "Ingrese el tiempo transcurrido en formato HHMMSS: " << endl;
    cin >> h2;
    tiempo(h1, h2);
    return 0;
}
