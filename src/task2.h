#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

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



    getchar();
}