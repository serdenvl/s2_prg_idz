#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

char* scan_str()
{
    char* arr = 0;
    int len = 0;
    
    for(char buff = getchar(); len == 0 || buff != '\n'; buff = getchar())
    {
        if(len == 0 && buff == '\n')
            continue;
        len += 1;
        arr = realloc(arr, len);
        arr[len-1] = buff;
    }

    arr = realloc(arr, len+1);
    arr[len] = '\0';

    return arr;
}

char* replace_word(char* str, char* old, char* new)
{
    int len_old = strlen(old);
    int len_new = strlen(new);

    int len_res = strlen(str)+1;
    char* res = malloc(len_res*sizeof(char));
    res[0] = '\0';

    char* ind = str;
    while(*ind != '\0')
    {
        if(
            (str == ind || *(ind-1) == ' ') &&
            (!strncmp(ind, old, len_old)) && 
            (*(ind+len_old) == ' ' || *(ind+len_old) == '\0' || *(ind+len_old) == '\n')
        )
        {
            len_res += len_new - len_old;
            res = realloc(res, (len_res)*sizeof(char));
            res = strcat(res, new);
            ind += len_old;
        }
        else
        {
            res = strncat(res, ind, 1);
            ind += 1;
        }
    }

    free(str);
    return res;
}

/*
    Дана строка символов, которая может содержать слово “then”. Заменить каждое вхождение слова “then” словом “the”. 
    Словами считать группы символов, раз-делённые одним или несколькими пробелами. 
*/

#define task_name "idz #5"
#define welcome_message "\
Дана строка. \n\
Заменить все вхождения \"then\" на \"the\" \n\
"

int task5()
{
    localize();
    welcome(task_name, welcome_message);

    while(getchar() != '\n');

    red_print("Введите строку: ");
    char* str = scan_str();

    str = replace_word(str, "then", "the");

    red_print("Измененная строка: ");
    puts(str);

    free(str);
    getchar();
}