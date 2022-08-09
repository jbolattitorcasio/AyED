#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void hard();
void algoritmo();
void mostrar();

int main()
{
    hard();
    algoritmo();
    mostrar();

    return 0;
}

void mostrar()
{
    FILE *out;
    out = fopen("output.data", "rb");
    int x;
    while(fread(&x,sizeof(int),1,out))
    {
        cout << x << endl;
    }
    fclose(out);
    return;
}

void algoritmo()
{
    FILE *f1;
    FILE *f2;
    FILE *out;
    int x1, x2;
    f1 = fopen("arch1.data", "rb");
    f2 = fopen("arch2.data", "rb");
    out = fopen("output.data", "wb");
    while(fread(&x1,sizeof(int),1,f1) && fread(&x2,sizeof(int),1,f2))
    {
        fwrite(&x1,sizeof(int),1,out);
        fwrite(&x2,sizeof(int),1,out);
    }
    fclose(f1);
    fclose(f2);
    fclose(out);
    return;
}

void hard()
{
    FILE *f1;
    FILE *f2;
    f1 = fopen("arch1.data","wb");
    int v[] = {2,5,64,20,31};
    fwrite(v, sizeof(int),5,f1);
    fclose(f1);
    f2 = fopen("arch2.data","wb");
    int w[] = {12,3,7};
    fwrite(w, sizeof(int),3,f2);
    fclose(f2);
    return;
}
