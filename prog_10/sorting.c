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

// Megcseréli az elemek sorrendjét 
// Helyben módosítja a tömböt; semmit se ad vissza
void reverse(const int n, int tomb[])
{
    int i = 0;
    int j = n - 1;

    while(i < j)
    {
        int tmp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = tmp;

        i++;
        j--;
    }
    
}

// Kap egy tömböt, és helyben rendezi a tömböt csökkenő sorrendben, nem ad vissza semmit
void sort_desc(const int n, int tomb[])
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (tomb[j] < tomb[i])
    //         {
    //             int tmp = tomb[i];
    //             tomb[i] = tomb[j];
    //             tomb[j] = tmp;
    //         }
    //     }   
    // }

    sort_asc(n,tomb);
    reverse(n,tomb);

}

int main()
{
    srand(SEED);

    int tomb[MAX];

    felolt(MAX, tomb);
    kiir(MAX, tomb);
    sort_asc(MAX, tomb);
    kiir(MAX, tomb);
    sort_desc(MAX, tomb);
    kiir(MAX, tomb);

    return 0;
}