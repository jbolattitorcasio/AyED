#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int *x;
    cout << "x = " << x << endl;
    int *y;
    int i;
    i = 10;
    getch();

    x = &i;
    cout << "*x = " << *x << " y x = " << x << endl;
    y = x;
    cout << "*y = " << *y << " y y = " << y << endl;
    getch();

    *x = *y + 1;
    cout << "*x = " << *x << endl;
    *y = *x + 1;
    cout << "*y = " << *y << endl;
    cout << "I = " << i << endl;
    getch();

    y = new int;
    *y = *x/2;
    cout << "*x = " << *x << " y x = " << x << endl;
    cout << "*y = " << *y << " y y = " << y << endl;
    delete y;
    return 0;
}
