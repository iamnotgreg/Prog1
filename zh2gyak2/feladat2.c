#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * swapcase(const char* original)
{
    char* modified = malloc(strlen(original) * sizeof(char));

    
}

int main(int argc, char const *argv[])
{
    if (argc == 1 && argc >= 3)
    {
        fprintf(stderr,"Hiba! Adj meg egy stringet!");
        exit(1);
    }

    swapcase(argv[1]);
    
    return 0;
}
