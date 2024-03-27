#include <stdio.h>

int main()
{
    int szam = 0;
    printf("Adjon meg egy számot: ");
    scanf("%d", &szam);
    
    if(szam%2==0)
    {
        printf("A megadott szám páros.\n");
    }
    else
    {
        printf("A megadott szám páratlan.\n");
    } 
    
    
    
    
	
    return 0;
}
