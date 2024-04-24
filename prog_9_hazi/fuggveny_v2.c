#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct 
{
    int legkisebb;
    int legnagyobb;
    double atlag;
} Struktura;

Struktura func(int tomb[], int meret)
{
    Struktura result;
    result.legnagyobb = tomb[0];
    result.legkisebb = tomb[0];
    int osszeg = 0;

    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] > result.legnagyobb)
        {
            result.legnagyobb = tomb[i];
        }
        if (tomb[i] < result.legkisebb)
        {
            result.legkisebb = tomb[i];
        }
        
        osszeg += tomb[i];
    }

    result.atlag = osszeg / (double)meret;

    return result;
}

int main()
{
    srand(time(NULL));

    int tomb[10] = {0};
    int meret = 10;
    int felso = 99;
    int also = 10;

    for (int i = 0; i < meret; i++)
    {
        int random = rand() % (felso - also + 1) + also;
        tomb[i] = random;
    }
    
    printf("A tömb elemei: ");
    for (int i = 0; i < meret; i++)
    {
        printf("%d", tomb[i]);
        if (i != 9)
        {
            printf(", ");
        }
    }

    Struktura data = func(tomb, meret);

    puts("");
    printf("Legkisebb elem: %d\n", data.legkisebb);
    printf("Legnagyobb elem: %d\n", data.legnagyobb);
    printf("Az elemek átlaga: %lf\n", data.atlag);

    return 0;
}