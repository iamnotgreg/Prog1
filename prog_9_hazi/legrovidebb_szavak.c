#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void szavak(int argc, char *argv[])
{
    if (argc < 2)
    {
        fprintf(stderr,"Nem adtál meg egyetlen szót sem!");
        exit(1);
    }
    else
    {
        int hossz = strlen(argv[1]);
        for (int i = 2; i < argc; i++)
        {
            if (strlen(argv[i]) < hossz)
            {
                hossz = strlen(argv[i]);
            }
        }
        for (int i = 1; i < argc; i++)
        {
            if (strlen(argv[i]) == hossz)
            {
                printf("%s\n",argv[i]);
            }
            
        }
        
    }
}

int main(int argc, char *argv[])
{
    szavak(argc, argv);

    return 0;
}