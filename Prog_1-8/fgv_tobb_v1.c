#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void min_max_avg(int tomb[], int meret, int *smallest, int *largest, float *avg)
{
    *smallest = *largest = tomb[0];
    *avg = 0;

    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < *smallest)
            *smallest = tomb[i];
        if (tomb[i] > *largest)
            *largest = tomb[i];

        *avg += tomb[i];
    }

    *avg /= meret;
}

int main()
{
    srand(time(NULL));
    int tomb[10];
    for (int i = 0; i < 10; i++)
    {
        tomb[i] = rand() % (99 - 10 + 1) + 10;
    }

    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", tomb[i]);
    }
    printf("\n");

    int smallest, largest;
    float avg;
    min_max_avg(tomb, 10, &smallest, &largest, &avg);

    printf("smallest elem: %d\n", smallest);
    printf("largest elem: %d\n", largest);
    printf("A tomb elemeinek avga: %.2f\n", avg);

    return 0;
}
