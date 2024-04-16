#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Stats {
    int tomb[10];
    int smallest;
    int largest;
    float avg;
};

void min_max_avg(struct Stats *data)
{
    data->smallest = data->tomb[0];
    data->largest = data->tomb[0];
    data->avg = 0; 

    for (int i = 0; i < 10; i++)
    {
        if (data->tomb[i] < data->smallest)
            data->smallest = data->tomb[i];
        if (data->tomb[i] > data->largest)
            data->largest = data->tomb[i];

        data->avg += data->tomb[i];
    }

    data->avg /= 10;
}

int main()
{
    srand(time(NULL));
    struct Stats data;
    for (int i = 0; i < 10; i++)
    {
        data.tomb[i] = rand() % (99 - 10 + 1) + 10;
    }

    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", data.tomb[i]);
    }
    printf("\n");

    min_max_avg(&data);

    printf("Legkisebb elem: %d\n", data.smallest);
    printf("Legnagyobb elem: %d\n", data.largest);
    printf("A tomb elemeinek atlaa: %.2f\n", data.avg);

    return 0;
}
