#include <stdio.h>


int main()
{
    int i;
    int szum;

    for (i = 1; i < 1000; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
            szum = szum + i;
        }
        else if (i % 5 == 0)
        {
            printf("%d\n", i);
            szum = szum + i;
        }
    }

    printf("%d\n", szum);

    return 0;
}