#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

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



    getchar();
}