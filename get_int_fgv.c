#include <stdio.h>

int get_int()
{
    int szam;
    printf("Szam: ");
    scanf("%d", &szam);
    return szam;
}

int main()
{
    int n = get_int();

    printf("A szám: %d\n", n);

    return 0;
}