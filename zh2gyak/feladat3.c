#include <stdio.h>
#include <stdlib.h>

#define LENGTH 5



typedef struct
{
    int min;
    int max;
} minimax;

void fill(int n , int matrix[LENGTH][LENGTH])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = rand() % (99 - 10 + 1) + 10;
        }
        
    }
    
}

minimax find_minimax(int matrix[LENGTH][LENGTH], int n)
{
    minimax lista;
    lista.min = matrix[0][0];
    lista.max = matrix[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] > lista.max)
            {   
                lista.max  = matrix[i][j];
            } 
            if (matrix[i][j] < lista.min)
            {
                lista.min = matrix[i][j];
            }
        }
        
    }

    return lista;    
}

int main(int argc, char const *argv[])
{
    srand(1980);

    minimax lista;
    int matrix[LENGTH][LENGTH];

    fill(LENGTH,matrix);

    lista = find_minimax(matrix,LENGTH);

    for (int i = 0; i <LENGTH; i++)
    {
        for (int j = 0; j < LENGTH; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    puts("");

    printf("Legkisebb eleme: %d\n", lista.min);
    printf("Legnagyobb eleme: %d\n", lista.max);
    


    return 0;
}
