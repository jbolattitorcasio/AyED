#include <iostream>

using namespace std;

int fact(int f)
{
    int resultado = 1;

    for(int i=1;i<=f;i++)
    {
        resultado*=i;
    }
    return resultado;
}

int multres(int m)
{
    int resultado = 0;

    if(m%3 == 0)
    {
        resultado++;
    }
    return resultado;
}

int multcinco(int m)
{
    int resultado = 0;

    if(m%5 == 0)
    {
        resultado++;
    }
    return resultado;
}

int multcyt(int m)
{
    int resultado = 0;

    if((m%5 == 0) && (m%3 == 0))
    {
        resultado++;
    }
    return resultado;
}

int main()
{
    int a, b, c;
    int multiplosDeTres, multiplosDeCinco, multiploDeTresCinco;
    cout << "Ingrese 3 numeros enteros: " << endl;
    cin >> a >> b >> c;
    cout << "El factorial de " << a << " es " << fact(a) << endl;
    cout << "El factorial de " << b << " es " << fact(b) << endl;
    cout << "El factorial de " << c << " es " << fact(c) << endl;
    multiplosDeTres = multres(a) + multres(b) + multres(c);
    cout << "Hay " << multiplosDeTres << " multiplos de 3" << endl;
    multiplosDeCinco = multcinco(a) + multcinco(b) + multcinco(c);
    cout << "Hay " << multiplosDeCinco << " multiplos de 5" << endl;
    multiploDeTresCinco = multcyt(a) + multcyt(b) + multcyt(c);
    cout << "Hay " << multiplosDeCinco << " multiplos de 3 y 5" << endl;

    return 0;
}
