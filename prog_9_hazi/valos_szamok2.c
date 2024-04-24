#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    long double number, sum = 0.0;

    FILE *fp = fopen("in.txt", "r");
    FILE *fp2 = fopen("out.txt", "w");

    if (fp == NULL) {
        fprintf(stderr,"Hiba! Nem sikerült megnyitni a file-t!\n");
        exit(1);
    }
    else
    {
        puts("in.txt sikeresen megnyitva");
    }

    int i = 0;

    puts("0,5-nél nagyobb számok szűrése...");
    while (fscanf(fp, "%Lf", &number) == 1) {
        if (number > 0.5)
        {
            fprintf(fp2, "%.20Lf\n",number);
            ++i;
        }
        
    }
    puts("szűrés vége");

    fclose(fp);
    fclose(fp2);
    puts("out.txt bezárva");
    printf("out.txt-be kiírt számok mennyisége: %d db\n", i);

    return 0;
}
