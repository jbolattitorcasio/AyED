#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

void hard();
void mostrar();
void algortimo();

int main()
{
    hard();
    algortimo();
    mostrar();
    return 0;
}

void algortimo()
{
    FILE *f1,*f2,*out;
    f1 = fopen("arch1.data","rb");
    f2 = fopen("arch2.data","rb");
    out = fopen("output.data","wb");
    int x1,x2;
    while(fread(&x1,sizeof(int),1,f1) && fread(&x2,sizeof(int),1,f2))
    {
        if (x1 < x2)
        {
            fwrite(&x1,sizeof(int),1,out);
            fseek(f2,(-1)*sizeof(int),SEEK_CUR);
        }
        else
        {
            fwrite(&x2,sizeof(int),1,out);
            fseek(f1,(-1)*sizeof(int),SEEK_CUR);
        }
    }
    while (!feof(f1))
    {
        fwrite(&x1,sizeof(int),1,out);
        fread(&x1,sizeof(int),1,f1);
    }

    while (!feof(f2))
    {
        fwrite(&x2,sizeof(int),1,out);
        fread(&x2,sizeof(int),1,f2);
    }
    fclose(f1);
    fclose(f2);
    fclose(out);
    return;
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

void hard()
{
    FILE *f1;
    FILE *f2;
    f1 = fopen("arch1.data","wb");
    int v[] = {2,5,20,31};
    fwrite(v, sizeof(int),4,f1);
    fclose(f1);
    f2 = fopen("arch2.data","wb");
    int w[] = {3,7,12};
    fwrite(w, sizeof(int),3,f2);
    fclose(f2);
    return;
}
