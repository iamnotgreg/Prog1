#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.c"
#define MAX 1000

int main(int argc, char *argv[])
{
    string text = argv[1];
    char sor[MAX];

    FILE *fp = fopen(text, "r");
    if (argc == 1)
    {
        fprintf(stderr,"Hiba! Adja meg egy szöveges állomány nevét!");
        exit(1);
    }
    else if (fp == NULL)
    {
        fprintf(stderr,"Hiba! A %s nevű file-t nem sikerült megnyitni!", text);
        exit(1);
    }
    else
    {
        int i = 0;
        while (fgets(sor, MAX, fp) != NULL)
        {
            ++i;
        }
        printf("%d\n", i);
    }
    
    fclose(fp);

    return 0;
}