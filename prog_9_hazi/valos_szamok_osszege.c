#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    FILE *file;
    long double number, sum = 0.0;

    // setlocale(LC_NUMERIC, "hu_HU.UTF-8");

    file = fopen("valos_szamok.txt", "r");

    char fchar[1024];

    while (fgets(fchar, sizeof(fchar), file) != NULL)
    {
        for (char *ptr = fchar; *ptr != '\0'; ptr++)
        {
            if (*ptr == ',')
            {
                *ptr = '.';
            }
            
        }
        sum += atof(fchar);
    }

    if (file == NULL) {
        fprintf(stderr,"Hiba! Nem sikerült megnyitni a file-t!\n");
        exit(1);
    }

    fclose(file);

    puts("");
    printf("Az osszeg: %.20Lf\n", sum); 

    return 0;
}
