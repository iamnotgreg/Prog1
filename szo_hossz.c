#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() 
{
    char words[MAX_LENGTH][MAX_LENGTH];
    int count = 0;
    int leghossz = 0;
    
    printf("Adj meg szavakat '*' végjelig!\n");
    
    while (1) 
    {
        printf("Szó: ");
        fgets(words[count], MAX_LENGTH, stdin);
        if (words[count][0] == '*') 
        {
            if (words[count][1] == '\n') 
            {
                break;
            }  
            words[count][1] = '\0'; 
        } else 
        {
            words[count][strlen(words[count]) - 1] = '\0'; 
        }
        count++;
    }
    
    for (int i = 0; i < count; i++)
    {
        int len = strlen(words[i]);
        if (len > leghossz)
        {
            leghossz = len;
        }
    }
    
    printf("\n");
    printf("%d darab szót adtál meg. A leghosszabb szó %d karakterből áll.\n", count, leghossz);
    
    return 0;
}
