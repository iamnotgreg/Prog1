#include <stdio.h>

int main()
{
    int i;
    int pozelemek = 0;
    int negelemek = 0;
    while(i!=0)
    {
        printf("Adjon meg egy szamot: ");
        scanf("%d",&i);
        if(i>0)
        {
            pozelemek++;
        }else if (i<0)
        {
            negelemek++;
        }
        
    }

    printf("Pozitiv elemek szama: %d\n", pozelemek);
    printf("Negativ elemek szama: %d\n", negelemek);

    return 0;
}