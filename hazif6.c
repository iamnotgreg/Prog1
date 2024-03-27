#include <stdio.h>

int main()
{
    int a, b;
    printf("Adjon meg egy szamot: ");
    scanf("%d", &a);
    printf("Adjon meg egy masik szamot: ");
    scanf("%d", &b);
    if(a>b)
    {
        printf("%d nagyobb\n", a);
    }else if(b>a)
    {
        printf("%d nagyobb\n", b);
    }else
    {
        printf("A ket szam egyenlo\n");
    }

    return 0;
}