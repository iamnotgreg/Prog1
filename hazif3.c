#include <stdio.h>

/*
int main()
{
    int i;
    int elemek = 0;
    do
    {
        printf("Adjon meg egy szamot:");
        scanf("%d", &i);
        if (i != 0)
        {
            elemek++;
        }

    } while (!(i == 0));

    printf("Elemek szama: %d\n", elemek);

    return 0;
}
*/

/*do while ciklus helyett while ciklussal csinaljuk meg ezt a programot.*/


int main()
{
    int i;
    int elemek = 0;
    while(i!=0)
    {
        printf("Adjon meg egy szamot:");
        scanf("%d",&i);
        if(i!=0)
        {
            elemek++;
        }
    }

    printf("Elemek szama: %d\n", elemek);

    return 0;
}
