#include <stdio.h>

void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

void modosit( const int n, const int tomb[])
{
    // tomb[0] = 999;
}

int find_min(const int n, const int tomb[])
{
    int min = tomb[0];

    for (int i = 1; i < n; i++)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
    }
    
    return min;
}

int main()
{
    int szamok[10] = {1, 2, 3, 4, 5, -6, 7, 8, 9, 10};
    int meret = 10;

    kiir(meret, szamok);

    int mini = find_min(meret, szamok);
    printf("Legkisebb elem: %d\n", mini);

    // modosit(meret, szamok);
    // kiir(meret, szamok);

    return 0;
}