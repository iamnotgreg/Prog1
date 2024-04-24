#include <stdio.h>

int main()
{
    int a, b, kerulet, terulet; 

    printf("Adja meg az a oldal hosszát: ");
    scanf("%d", &a);

    printf("Adja meg a b oldal hosszát: ");
    scanf("%d", &b);

    kerulet = 2*(a+b);
    terulet = a*b;

    printf("A teglalap kerulete: %d\n", kerulet);
    printf("A teglalap terulete: %d\n", terulet); 


    return 0;
}