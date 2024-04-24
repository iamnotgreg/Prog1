/*
-2024 +2024 tombot random szamokkal megszamolni hany negativ szam van
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void rand_array(int array[], int length)
{
    srand(time(NULL));
    for (int i = 0; i < length; i++)
    {
        array[i] = rand() % (2024 - (-2023)+1) + (-2024);
        printf("%d\n",array[i]);

    }
    

}

int minusz_szamok(int array[], int length)
{
    int cnt = 0;
    for (int i = 0; i < length; i++)
    {
        if(array[i] < 0)
        {
            cnt++;
        }
    }
    
    return cnt;
}

int main()
{   
   int nums[10];
   int length = 10;
   rand_array(nums,length);
   printf("%d db minusz szam van benne.", minusz_szamok(nums, length));

    return 0;
}