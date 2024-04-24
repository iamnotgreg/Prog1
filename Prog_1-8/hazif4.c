#include <stdio.h>

int main()
{
    
    int i;
    int elemek = 0;
    while(i!=0)
    {
        printf("Adjon meg egy szamot:");
        scanf("%d",&i);
        if(i>0)
        {
            elemek++;
        }
    }

    printf("Elemek szama: %d\n", elemek);

    return 0;
}