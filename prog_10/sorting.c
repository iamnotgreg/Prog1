#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10
#define SEED 9595

int rand_int(int lo, int hi)
{
    return (rand() % (hi - lo +1)) + lo;
}

void felolt(const int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        tomb[i] = rand_int(21, 69);
    }
    
}

void kiir(const int n, const int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

// Kap egy tömböt, és helyben rendezi a tömböt növekvő sorrendben, nem ad vissza semmit
void sort_asc(const int n, int tomb[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (tomb[j] > tomb[i])
            {
                int tmp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = tmp;
            }
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", tomb[i]);
    }
    puts("");
}

int main()
{
    srand(SEED);

    int tomb[MAX];

    felolt(MAX, tomb);
    kiir(MAX, tomb);
    sort_asc(MAX, tomb);

    return 0;
}