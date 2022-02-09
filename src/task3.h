#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int index_of_possible(int **matrix, int M, int N)
{
    for (int j = 0; j < N; ++j)
        for (int i = 0; i < M; ++i)
            if (matrix[i][j] < 0)
                break;
            else if (i == M - 1)
                return j;
    return -1;
}

/*
    Дана матрица размера M × N.
    Перед первым столбцом, содержащим только по-ложительные элементы, вставить столбец из единиц.
    Если требуемых столбцов нет, то вывести матрицу без изменений.
*/

#define task_name "idz #3"
#define welcome_message "\
Дана матрица MxN. \n\
Вставить столбец единиц перед первым столбцом положительных элементов. \n\
"

int task3()
{
    localize();
    welcome(task_name, welcome_message);

    int M = scan_int("M: ");
    int N = scan_int("N: ");
    int **matrix = input_matrix(M, N);

    red_print("Данная матрица: ");
    print_matrix(matrix, M, N);

    int ind = index_of_possible(matrix, M, N);

    if (ind != -1)
    {
        N += 1;
        matrix = realloc(matrix, N * sizeof(int *));

        for (int i = 0; i < M; ++i)
            for (int j = N-1; ind < j; --j)
                swap(&matrix[i][j - 1], &matrix[i][j]);
        
        for(int i = 0; i < M; ++i)
            matrix[i][ind] = 1;
    }

    red_print("Измененная матрица: ");
    print_matrix(matrix, M, N);

    getchar();
}