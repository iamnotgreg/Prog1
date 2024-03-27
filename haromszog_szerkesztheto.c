#include <stdio.h>

int valid_triangle()
{
    int a,b,c;

    printf("Adja meg a háromszög oldalait: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("A háromszög megszerkeszthető.\n");
    }else
    {
        printf("A háromszög nem szerkeszthető meg.\n");
    }

    return 0;
}

int main()
{
    valid_triangle();

    return 0;
}