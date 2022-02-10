#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int* lens_of_string(FILE* file)
{
    int* array = new_array(1);
    array[0] = 1;

    int count = 0;
    char buff;
    while(buff != -1)
    {
        buff = fgetc(file);
        if(buff == '\n' || buff == -1)
        {
            array[0] += 1;
            array = resize_array(array, array[0]);

            array[array[0]-1] = count;
            count = 0;
            continue;
        }
        
        ++count;
    }

    return array;
}

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

    FILE* file = fopen("../src/file.txt", "r");

    int* lens = lens_of_string(file);

    red_print("Длины строк: ");
    for(int i = 1; i < lens[0]; ++i)
        printf("\n%d: %d", i, lens[i]);
    free(lens);
    
    fclose(file);
    getchar();
}