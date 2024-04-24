#include <stdio.h>
#include <math.h>
#include <string.h>

int sqradd(int nums[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += nums[i];
    }
    
    int sqr1 = pow(sum,2);

    return sqr1;
}

int addsqr(int nums[], int length)
{
    int sqr2 = 0;
    for (int i = 0; i < length; i++)
    {
        int tmp = nums[i];
        sqr2 += pow(tmp,2);
    }
    
    return sqr2;
}

int main()
{
    int nums[100];
    int length = 100;

    for (int i = 0; i < length; i++)
    {
        nums[i] = i + 1;
    }
    
    printf("%d\n", sqradd(nums,length));
    printf("%d\n", addsqr(nums,length));
    printf("%d\n", sqradd(nums,length)-addsqr(nums,length));


    return 0;
}