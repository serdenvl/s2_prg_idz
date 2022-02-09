#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int num_sorted_col(int** matrix, int M, int N)
{
    int count = 0;

    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M-1; ++j)
            if(matrix[j][i] < matrix[j+1][i])
            {
                --count;
                break;
            }
        ++count;
    }

    return count;
}

/*
    Дана матрица размера M × N. 
    Найти количество ее столбцов, элементы которых упорядочены по убыванию. 
*/

#define task_name "idz #2"
#define welcome_message "\
Дана матрица MxN. \n\
Вывести количество столбцов, отсортированных по убыванию \n\
"

int task2()
{
    localize();
    welcome(task_name, welcome_message);

    int M = scan_int("M: ");
    int N = scan_int("N: ");
    int** matrix = input_matrix(M,N);

    red_print("Данная матрица: ");
    print_matrix(matrix, M, N);

    red_print("Количество: ");
    printf("%d", num_sorted_col(matrix, M, N));

    getchar();
}