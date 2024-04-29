#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int meret = 5;
    int tomb[] = {3, 1, 2, 4, 7};

    for (int i = 0; i < meret - 2; i++)
    {
        for (int j = 1; j < meret - 1; j++)
        {
            if (tomb[i] + tomb[j] == 5 )
            {
                printf("%d + %d = 5 \n", tomb[i], tomb[j]);
            }
        }
        
    }
    
    

    return 0;
}