#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int db, also_hatar, felso_hatar;

    printf("Mennyi random szamot kersz? ");
    scanf("%d", &db);

    printf("Also hatar: ");
    scanf("%d", &also_hatar);

    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso_hatar);

    printf("\nA generalt szamok: ");
    for (int i = 0; i < db; ++i)
    {
        int random_number = (rand() % (felso_hatar - also_hatar + 1)) + also_hatar;
        printf("%d ", random_number);
    }
    printf("\n");

    return 0;
}
