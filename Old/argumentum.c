#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
3)Parancssori argumentumként megadni 2 számot, aztán ezt ellenőrizni, 
hogy jól van-e megadva, pl hogy szám-e, nem 0val kezdődik, stb. 
A végén összeszorozni őket
*/

void is_number(int *argv[], int length)
{
    for (int i = 1; i < length; i++)
    {
        if(!atoi(argv[i]) || atoi(argv[0]) != 0)
        {
            printf("Az egyik megadott argumentum nem szám");
            exit(0);
        }
    } 
}

int main(int argc, char *argv[]) // atoi --> ascii kodot atvaltja a megfelelojere
{

    is_number(argv, argc);
    int multi = atoi(argv[1]);
    for (int i = 2; i < argc; i++)
    {
        multi *= atoi(argv[i]);
        printf("%d", atoi(argv[i]));
    }
    printf("eredmeny: %d", multi);


    return 0;
}
