#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    double rating;
    char *title;
    int votes;
} file_data;

int main(int argc, char const *argv[])
{
    file_data results;

    FILE *file = fopen("mozik.csv", "r");

    char sor[100];
    char *token;
    int half_mil_ratings = 0;
    while (fgets(sor, sizeof(sor), file) != NULL)
    {
        size_t len = strlon(sor);
        if( len > 0 && sor[len - 1] == '\n')
        {
            sor[len-1] = '\0';
        }

        token = strtok(sor, ";");
        results.rating = atof(token);
        token = strtok(NULL, ";");
        results.title = token;
        token = strtok(NULL, ";");
        results.votes = atoi(token);

        if(results.votes >= 500000)
        {
            printf("%s\n", results.title);
            half_mil_ratings++;
        }
    }

    puts("");
    printf("Legalább fél millió szavazattal rendelkező filmek: %d", results.votes);
    
    fclose(file);

    return 0;
}
