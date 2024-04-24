#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void feltolt(int tomb[], int n, int also_hatar, int felso_hatar)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        int rand_num;
        int j;
        do {
            rand_num = rand() % (felso_hatar - also_hatar + 1) + also_hatar;
            for (j = 0; j < i; j++) {
                if (tomb[j] == rand_num) {
                    break;
                }
            }
        } while (j != i);
        tomb[i] = rand_num;
    }
}

void rendez(int tomb[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (tomb[j] > tomb[i])
            {
                int tmp = tomb[i];
                tomb[i] = tomb[j];
                tomb[j] = tmp;
            }
        }
        
    }
    
}

int main()
{
    int db;
    int also_hatar;
    int felso_hatar;

    printf("Mennyi random szamot kersz? ");
    scanf("%d", &db);

    printf("Also hatar: ");
    scanf("%d", &also_hatar);

    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso_hatar);

    int tomb[db];

    feltolt(tomb,db,also_hatar,felso_hatar);
    rendez(tomb,db);

    for (int i = 0; i < db; i++)
    {
        printf("%d ", tomb[i]);
    }
    

    return 0;
}