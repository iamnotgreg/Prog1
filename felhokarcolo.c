#include <stdio.h>

int get_sumDiff(int n, int array[])
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (array[i] > array[i - 1])
        {
            sum += array[i] - array[i - 1];
        }
        else
        {
            sum += array[i - 1] - array[i];
        }
    }
    return sum;
}

int main()
{
    double nums = 1;
    
    for (int i = 0; i < 1024; i++)
    {
        nums = 2 * nums;
        if (i < 10)
        {
            printf("%d., %lf\n", i + 1, nums);
        }
    }
    printf("%lf\n", nums);

    int height[7] = {2, 4, 8, 3, 9, 7, 1};
    int lenght = 7;
    printf("A magasság különbségek összege: %d\n", get_sumDiff(lenght, height));
    return 0;
}



