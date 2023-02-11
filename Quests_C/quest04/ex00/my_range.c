#include <stdlib.h>
/*
**
** QWASAR.IO -- my_range
**
** @param {int} param_1
** @param {int} param_2
**
** @return {int*}
**
*/

int* my_range(int the_start, int the_end){
    int range_len = the_end - the_start; int* digit = malloc(range_len * (sizeof(int)));  int index = 0;
         for(int i = the_start; i < the_end; i++){
            digit [index] = i;
            index +=1;
    }
    return digit;
}