#include <string.h>
#include <stdlib.h>
/*
**
** QWASAR.IO -- my_count_on_it
**
** @param {string_array*} param_1
**
** @return {integer_array*}
**
*/
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif


integer_array* my_count_on_it(string_array* param_1){
struct s_integer_array* res = malloc(sizeof(integer_array));

int param = param_1->size;
    res->size = param;
    res->array = (malloc(sizeof(int) * param));

     for(int i = 0; i < param; i++){
       int str_len = strlen(param_1->array[i]);
        res->array[i] = str_len;
    }
    return res;
}