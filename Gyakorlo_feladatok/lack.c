#include <stdio.h>
#include <stdlib.h>

void konv(int tomb[], int meret) 
{
    for (int i = 0; i < meret; i++)
    {
        if(tomb[i] == 0)
        {
            printf("nulla ");
        } else if (tomb[i] == 1)
        {
            printf("egy ");
        }
    }
    
}

int main()
{
    int tomb[] = {0,0,1,0,1,0,0,1,0,1};
    int meret = 10;
    int n;
    puts("Bemenet: ");
    scanf("%d", &n);

    FILE *file = fopen("minta.txt", "w"); // fájl megnyitása
        for (int i = 1; i <= n ; i++) 
        {
            for (int j = 0; j < i; j++)
            {
                if(j%2 == 0) // ha nincs maradéka a j-nek akkor 0-t ha van akkor 1-et ir ki ezert valtakozik
                {
                    fprintf(file, "0 ");
                }
                else
                {
                    fprintf(file, "1 ");
                }
            }
            fprintf(file, "\n"); // sortörést rakunk be h haromszog alaku legyen
        }
    fclose(file); // fájl bezárása

    konv(tomb,meret);

    return 0;
}