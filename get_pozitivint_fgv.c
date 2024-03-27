#include <stdio.h>

int get_pozitiv_int()
{
    int szam;
    while (1)
    {
        printf("Adjon meg egy pozitiv szamot: ");
        scanf("%d", &szam);
        if (szam > 0)
        {
            break;
        }
    }
    return szam;
}

int main()
{
    int n = get_pozitiv_int();

    printf("A szám: %d\n", n);

    return 0;
}