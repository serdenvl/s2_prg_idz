#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

struct Baggage
{
    int number_items;
    int weight;
};

struct Baggage find(struct Baggage *array, int length)
{
    struct Baggage finded = array[0];
    for (int i = 1; i < length; ++i)
    {
        if(
            finded.number_items < array[i].number_items ||
            (finded.number_items == array[i].number_items && finded.weight > array[i].weight)
        )
            finded = array[i];
    }

    return finded;
}

/*
    Багаж пассажира характеризуется количеством вещей и общим весом.
    Создать таблицу,  содержащую  информацию о багаже нескольких пассажиров.
    Найти багаж, число вещей в котором не меньше, чем в любом другом, а вес, не боль-ше, чем в любом другом с тем же числом вещей.
*/

#define task_name "idz #8"
#define welcome_message "\
Дан массив багажей (количество вещей, вес). \n\
Вывести багаж с наибольшим количеством вещей \n\
и наименьшим весом среди багажей с равным количеством вещей. \n\
"

int task8()
{
    localize();
    welcome(task_name, welcome_message);

    int N = scan_int("Количество пассажиров: ");
    struct Baggage array[N];

    red_print("Информация о багаже: (количество_вещей вес)\n");
    for (int i = 0; i < N; ++i)
    {
        array[i].number_items = scan_int("");
        array[i].weight = scan_int("");
    }

    struct Baggage finded = find(array, N);

    red_print("Найденный багаж: ");
    printf("(%d, %d)", finded.number_items, finded.weight);

    getchar();
}