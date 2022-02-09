#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
    Багаж пассажира характеризуется количеством вещей и общим весом. 
    Создать таблицу,  содержащую  информацию о багаже нескольких пассажиров.  
    Найти багаж, число вещей в котором не меньше, чем в любом другом, а вес, не боль-ше, чем в любом другом с тем же числом вещей. 
*/

#define task_name "idz #8"
#define welcome_message "\
*description* \n\
"

// ? что значит "таблица"? два синхронных массива сойдут?

int task8()
{
    localize();
    welcome(task_name, welcome_message);

    red_print("Решения ещё нет");
    return 0;

    getchar();
}