#include <stdio.h>

int main()
{
    int szam;
    do
    {
        printf("Adjon meg egy szamot: ");
        scanf("%d", &szam);
    } while (!(szam > 0));

    printf("\n");
    printf("A megadott szam: %d\n", szam);

    return 0;
}