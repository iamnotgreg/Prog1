#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prog1.h"

#define MAX 1000

int main()
{
    string fname = "szoveg.txt";
    char line[MAX];

    FILE *fp = fopen(fname, "w"); // FILE *fp = fopen(fname, "w"); --> r = read, w = write 

    if (fp == NULL)
    {
        printf("HibaXD");
        exit(1);
    }
    

    while (fgets(line, MAX, fp) != NULL)
    {
        line[strlen(line) - 1] = '\0';
        printf("%s\n", line);
    }
    
    fprintf(fp, "Kutya jabbalaci\n");
    fprintf(fp, "ashoka\n");

    fclose(fp);

    return 0;
}