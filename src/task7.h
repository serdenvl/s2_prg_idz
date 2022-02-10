#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

struct Date
{
    int day;
    int month;
    int year;
};

int is_correct_date(struct Date date)
{
    if(date.year <= 0 || date.day <= 0 || date.month <= 0)
        return 0;
    
    if(12 < date.month)
        return 0;
    
    if( 30+((date.month < 8) == date.month%2) < date.day )
        return 0;
    
    #define bs (date.year%100!=0 || date.year%400==0) && date.year%4 == 0 
    
    if(date.month == 2 && (28 + (bs) < date.day))
        return 0;
    
    return 1;
}


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

    red_print("Введите дату: ");

    struct Date date = {scan_int(""), scan_int(""), scan_int("")};

    red_print((is_correct_date(date)) ? "Дата корректна" : "Дата некорректна");

    getchar();
}