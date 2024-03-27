#include <stdio.h>

int main()
{
    int magassag, i, j;

    printf("Magasság: ");
    scanf("%d", &magassag);

    if (magassag % 2 == 0)
    {
        printf("Rossz bemenet!\n");
    }
    else
    {
        for (i = 0; i < magassag / 2; i++)
        {
            for (j = 0; j < magassag - i - 1; j++)
            {
                printf(" ");
            }
            for (j = 0; j < 2 * i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        for (i = magassag / 2; i >= 0; i--)
        {
            for (j = 0; j < magassag - i - 1; j++)
            {
                printf(" ");
            }
            for (j = 0; j < 2 * i + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}