#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
    Дана матрица размера M × N. 
    Вывести ее элементы, расположенные в строках с четными номерами (2, 4, . . .). 
    Вывод элементов производить по строкам, услов-ный оператор не использовать. 
*/

#define task_name "idz #1"
#define welcome_message "\
Дана матрица MxN. \n\
Вывести четные строки. \n\
"

int task1()
{
    localize();
    welcome(task_name, welcome_message);

    int M = scan_int("M: ");
    int N = scan_int("N: ");
    int** matrix = input_matrix(M, N);

    red_print("Данная матрица: ");
    print_matrix(matrix, M, N);

    red_print("Вывод строк: ");
    for(int i = 0; i < M; i += 2)
    {
        printf("\n");
        print_array(matrix[i], N);
    }
    
    free_matrix(matrix, M); 
    getchar();
}