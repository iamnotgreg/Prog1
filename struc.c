#include <stdio.h>
#include <string.h>

typedef struct {
    int x;
    int y;
    double d;
} IntIntDouble;

IntIntDouble get_result()
{
    IntIntDouble result;
    result.x = 2;
    result.y = 5;
    result.d = 3.14;

    return result;
}

int main()
{
    IntIntDouble r = get_result();
    printf("x: %d\n", r.x);
    printf("y: %d\n", r.y);
    printf("x: %lf\n", r.d);


    return 0;
}