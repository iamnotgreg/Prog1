#include <stdio.h>

int rendezett_e(int tomb[], int meret)
{
    int rendezett = 1;
    for (int i = 0; i < meret-1; i++)
    {
        if (tomb[i] > tomb[i+1])
        {
            rendezett = 0;
            break;
        }
    }
    if (rendezett == 0)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int tomb[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tomb_meret = 9;

    printf("rendezett-e: %d\n", rendezett_e(tomb, tomb_meret));

    return 0;
}