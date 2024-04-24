#include <stdio.h>


int main(){

    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int ter = 2;
        int szokozok = n-i; 
        int teglak = i; 
        
        for (int j = 0; j < szokozok; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < teglak; k++)
        {
            printf("#");
        }
        for (int z = 0; z < ter; z++)
        {
            printf(" ");
        }
        for (int v = 0; v < teglak; v++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}