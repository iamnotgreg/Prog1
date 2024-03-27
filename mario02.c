#include <stdio.h>

int main()
{
    int magassag;

    printf("Adja meg a háromszög magasságát: ");
    scanf("%d", &magassag);

    for (int i = 1; i <= magassag; i++)
    {
        int szokozok = magassag - i;
        int teglak = i;
        for (int j = 0; j < szokozok; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < teglak; k++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}