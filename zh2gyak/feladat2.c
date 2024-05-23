#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char * swapcase(const char* original)
{
    char * modified = malloc(strlen(original) * sizeof(char));

    for (int i = 0; i < original[i]; i++)
    {
        if(islower(original[i]))
        {
            modified[i] = toupper(original[i]);
        } else if (isupper(original[i]))
        {
            modified[i] = tolower(original[i]);
        }
    }


    return modified;
    
}

int main(int argc, char const *argv[])
{
    if ( argc < 2 || argc > 2 )
    {
        fprintf(stderr, "Hiba! Csak egy stringet adjon meg! \n");
        exit(1);
    }

    char * modified = swapcase(argv[1]);

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        printf("%c", modified[i]);
    }

    free(modified);

    return 0;
}