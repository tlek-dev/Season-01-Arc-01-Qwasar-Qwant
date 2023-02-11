/*
**
** QWASAR.IO -- my_is_sort
**
** @param {integer_array*} param_1
**
** @return {bool}
**
*/
#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

bool my_is_sort(integer_array* param_1)
{
    int num = 1;

        if (param_1->size < 2)
            return (true);
        if (param_1->array[num] >= param_1->array[num - 1]) {
            while (num < param_1->size && param_1->array[num] >= param_1->array[num - 1])
                num++;
        if (num == param_1->size)
            return (true);
    }
        num = 1;
    if (param_1->array[num] <= param_1->array[num - 1]) {
        while (num < param_1->size && param_1->array[num] <= param_1->array[num - 1])
            num++;
        if (num == param_1->size)
            return (true);
    }
    return (false);
}