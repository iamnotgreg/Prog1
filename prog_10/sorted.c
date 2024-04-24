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
}

int * sorted(const int n, const int tomb[])
{
    int *copy = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        copy[i] = tomb[i];
    }

    sort_asc(n, copy);
    
    return copy;
}

int main()
{
    srand(SEED);

    int eredeti[MAX];

    felolt(MAX, eredeti);

    int *rendezett = sorted(MAX, eredeti);

    kiir(MAX, eredeti);
    kiir(MAX, rendezett);

    

    return 0;
}