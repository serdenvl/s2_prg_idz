#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

#include "task1.h" 
#include "task2.h" 
#include "task3.h" 
#include "task4.h" 
#include "task5.h" 
#include "task6.h" 
#include "task7.h" 
#include "task8.h" 
#include "task9.h" 

typedef void voidfun();
#define task_len sizeof(task)/sizeof(voidfun*)

int main()
{
    localize();

    voidfun* task[] = {task1, task2, task3, task4};

    int buff = 0;
    while(1)
    {
        buff = scan_int("Номер задания (999 для выхода): ");
        if(buff == 999)
            break;

        if(1 <= buff && buff <= task_len)
            task[buff-1]();

        while(getchar() != '\n');
    }
}