#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void szamok(int tomb[], int meret, int *legkisebb, int *legnagyobb, double *atlag)
{
    *legkisebb = tomb[0];
    *legnagyobb = tomb[0];
    int osszeg = 0;
    
    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] > *legnagyobb)
        {
            *legnagyobb = tomb[i];
        }
        
        if (tomb[i] < *legkisebb)
        {
            *legkisebb = tomb[i];
        }

        osszeg += tomb[i];
        
    }
    
    *atlag = osszeg / (double)meret;

}

int main()
{
    srand(time(NULL));

    int felso = 99;
    int also = 10;
    int num = 0;

    int tomb[10] = {0};
    int meret = 10;

    int legkisebb;
    int legnagyobb;
    double atlag;

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

    szamok(tomb, meret, &legkisebb, &legnagyobb, &atlag);
    puts("");
    printf("Legkisebb elem: %d\n", legkisebb);
    printf("Legnagyobb elem: %d\n", legnagyobb);
    printf("Az elemek átlaga: %lf\n", atlag);

    
    return 0;
}