#include <stdio.h>

int main()
{
    int a;
    printf("Adjon meg egy számot: ");
    scanf("%d", &a);
    
    if(a>0)
    {
        printf("A szám pozitív.\n");
    }else if (a<0)
    {
        printf("A szám negatív.\n");
    }else
    {
        printf("A szám nulla.\n");
    }
    
    return 0;
}
