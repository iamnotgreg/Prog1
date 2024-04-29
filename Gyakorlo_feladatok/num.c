#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num = 100;
    int sum = 0;
    float avg = 0;
    int cnt = 0;
    int numbers = 0;
    while (1)
    {
        printf("Adj meg szamokat: ");
        scanf("%d", &numbers);

        sum = sum + numbers;

        cnt++;

        avg = sum/cnt;

        if (sum > num)
        {
            printf("A szamok atlaga: %.2lf", avg);
            break;
        }

    }
    
    return 0;
}
