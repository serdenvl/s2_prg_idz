#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
    Даны строки S и S0 . 
    Удалить из строки S последнюю подстроку, совпадающую с S0 . 
    Если совпадающих подстрок нет, то вывести строку S без изменений. 
*/

#define task_name "idz #6"
#define welcome_message "\
Даны две строки.\n\
Удалить последнее вхождение второй строки в первую. \n\
"

int task6()
{
    localize();
    welcome(task_name, welcome_message);

    red_print("Решения ещё нет");
    return 0;

    getchar();
}