#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
    Дана строка символов, которая может содержать слово “then”. Заменить каждое вхождение слова “then” словом “the”. 
    Словами считать группы символов, раз-делённые одним или несколькими пробелами. 
*/

#define task_name "idz #5"
#define welcome_message "\
Дана строка. \n\
Заменить все вхождения \"then\" на \"the\" \n\
"

// ? Замена "then" -> "the " считается?

int task5()
{
    localize();
    welcome(task_name, welcome_message);

    red_print("Решения ещё нет");
    return 0;

    getchar();
}