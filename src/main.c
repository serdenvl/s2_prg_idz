#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/*
    *place_for_task*
*/

#define task_name "lab #N"
#define welcome_message "\
*description* \n\
"

int main()
{
    localize();
    welcome(task_name, welcome_message);

    int* arr = new_array(5);
    for(int i = 0; i < 5; ++i)
        printf("%d", arr[i]);
    
    getchar();
}