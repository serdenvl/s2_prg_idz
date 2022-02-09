#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
    Написать и протестировать функцию, проверяющую правильность даты (т.е. чтобы не было 31 июня и т.п.). 
    Для описания даты использовать структуру. 
*/

#define task_name "idz #7"
#define welcome_message "\
Протестировать функцию проверки корректности даты. \n\
Для описания даты использовать структуру. \n\
"

int task7()
{
    localize();
    welcome(task_name, welcome_message);



    getchar();
}