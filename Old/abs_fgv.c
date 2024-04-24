#include <stdio.h>

int my_abs(int szam)
{
    if (szam < 0)
    {
        return -szam;
    }
    return szam;
}

int main()
{
    int result = my_abs(-918273);

    printf("%d\n", result);

    return 0;
}