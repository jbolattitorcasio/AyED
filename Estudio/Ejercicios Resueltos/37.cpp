#include <iostream>

using namespace std;

float CalcularPorcentajeDiferencia(int A ,int B)
{
    float result;
    if((A+B) == 0)
        return 0;

    result = ((B-A)*100)/(A+B);
    return result;
}

int main()
{
    int A, B;
    cout << "Ingrese los valores para calcular el porcentaje diferencia: " << endl;
    cin >> A >> B;
    cout << "El porcentaje diferencia entre " << A << " y " << B << " es " << CalcularPorcentajeDiferencia(A, B) << "%." << endl;
    return 0;
}
