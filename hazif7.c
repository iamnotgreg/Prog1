#include <stdio.h>

int main()
{
    int a;
    int i=1;
    printf("Adjon meg egy számot:");
    scanf("%d", &a);
    while (i<a)
    {
        if(i%4==0)
        {
            printf("%d\n", i);
        }
        i++;
    }


    return 0;
}