#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prog1.c"

/*
    egy útvonalat kap meg folyamatosan END végjelig, és kiírja hogy melyik utvonal volt a legmelyebben
*/

int counter_directory_depth(string path)
{
    int cnt = 0;
    int cnt2 = 0;
    for (int i = 0; i < path[i]; i++)
    {
        if (path[i] == '/')
        {
            cnt++;
        }
    }

    if (cnt >= cnt2)
    {
        cnt2 = cnt;
    }
    
    return cnt2 - 1;
}

int main()
{
    while (1)
    {
        char path[100];
        fgets(path, sizeof(path), stdin);

        if(strlen(path) == 3)
        {
            puts("Beolvasas vege...");
            printf("fasz: %d ", counter_directory_depth(path));
            break;
        }
    }
    

    return 0;
}