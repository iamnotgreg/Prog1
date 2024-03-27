#include <stdio.h>

int main()
{
    int a;
    printf("Adjon meg egy számot:");
    scanf("%d", &a);
    for(int i=a; i>=1; i--)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}