#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

char* cut_substr(char* str, char* substr)
{
    int len_str = strlen(str);
    int len_sub = strlen(substr);

    if(len_str < len_sub)
        return str;

    char* ind = str + len_str -1 - len_sub;

    do
    {
        if(!strncmp(ind, substr, len_sub))
        {
            strcpy(ind, ind+len_sub);
            return realloc(str, len_str+1-len_sub);
        }
        --ind;
    } while (ind != str);
    
    return str;
}

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

    red_print("Введите строку: ");
    char* str = scan_str();

    red_print("Введите подстроку: ");
    char* sub = scan_str();

    str = cut_substr(str, sub);

    red_print("Измененная строка: ");
    puts(str);

    free(str);
    free(sub);
    getchar();
}