#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n = 0;
    int t1 = 0;
    int t2 = 1;
    int kovetkezo = t1 + t2;

    printf("n: ");
    scanf("%d", &n);

    for (int i = 3; i <= n; i++)
    {
        if (kovetkezo % 2 == 0)
        {
            printf("%d ", kovetkezo);
        }
        puts("");

        t1 = t2;
        t2 = kovetkezo;
        kovetkezo = t1 + t2;
    }
    

    return 0;
}