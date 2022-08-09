#include <iostream>

using namespace std;

int main()
{
    int i, x;
    x = 0;
    for (i=1; i <=100; i++) {
        x = x + i;
        cout << i << endl;
    }
    cout << "La sumatoria es: " << x << endl;

    return 0;
}
