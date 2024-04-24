#include <stdio.h>

int main()
{
    int tomb[10] = {8, 5, 6, 10, 78, 9, 7, 12, 45, 19};
    int meret = 10;

    int min = tomb[0];
    int max = tomb[0];

    for (int i = 0; i < meret; i++)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
        if (tomb[i] > max)
        {
            max = tomb[i];
        }
    }

    printf("%d\n", min);
    printf("%d\n", max);
    
    return 0;
}