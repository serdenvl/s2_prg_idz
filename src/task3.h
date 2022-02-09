#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

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



    getchar();
}