#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
    Прочитать текстовый файл. 
    Для каждой строки определить и вывести на экран её номер и длину. 
*/

#define task_name "idz #9"
#define welcome_message "\
Дан текстовый файл. \n\
Вывести длину каждой строки. \n\
"

int task9()
{
    localize();
    welcome(task_name, welcome_message);



    getchar();
}