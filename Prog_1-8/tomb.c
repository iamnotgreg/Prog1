#include <stdio.h>

void kiir(int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

int array_sum(int n, int tomb[])
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = tomb[i] + sum;
    }

    return sum;
}

double array_avg(int n, int tomb[])
{
   // int sum;
   // for (int i = 0; i < n; i++)
   // {
   //     sum = tomb[i] + sum;
   // }

   // return (double)sum / (double)n;s
   return (double)array_sum(n, tomb) / (double)n;
    
}

int main()
{
    int szamok[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int meret = 10;

    kiir(meret, szamok);
    int osszeg = array_sum(meret, szamok);
    printf("Az elemek osszege: %d\n", osszeg);
    printf("Az elemek atlaga: %.2lf\n", array_avg(meret, szamok));

    return 0;
}