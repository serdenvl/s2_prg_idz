#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

// поворот на 180
void rotate_180(int **matrix, int M)
{
    for (int i = 0; i < M / 2 + M % 2; ++i)
        for (int j = 0; j < M; ++j)
        {
            // в случае серединной строки обработка до половины
            if (M % 2 == 0 && j == M / 2)
                break;

            swap(&matrix[i][j], &matrix[M - 1 - i][M - 1 - j]);
        }
}

/*
    Дана квадратная матрица A порядка M.
    Повернуть ее на угол 180º (при этом элемент A11 поменяется местами с AMM, элемент A12 — с AMM−1 и т. д.).
    Вспомо-гательную матрицу не использовать.
*/

#define task_name "idz #4"
#define welcome_message "\
Дана матрица MxM. \n\
Повернуть на 180. \n\
"

int task4()
{
    localize();
    welcome(task_name, welcome_message);

    int M = scan_int("M: ");
    int **matrix = input_matrix(M, M);

    red_print("Данная матрица: ");
    print_matrix(matrix, M, M);

    rotate_180(matrix, M);

    red_print("Измененная матрица: ");
    print_matrix(matrix, M, M);

    free_matrix(matrix, M);
    getchar();
}