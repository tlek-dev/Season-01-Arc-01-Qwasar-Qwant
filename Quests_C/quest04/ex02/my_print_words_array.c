#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/*
**
** QWASAR.IO -- my_print_words_array
**
** @param {string_array*} param_1
**
** @return {void}
**
*/
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
}   string_array;

#endif

void my_printf(char* str){
    for(int i = 0; str[i] != '\0'; i++){ char letter = str[i]; write(1, &letter, 1);
}
char end = '\n'; write(1, &end,1);
}

void my_print_words_array(string_array* param_1){
    int param = param_1->size;
        for(int i = 0; i < param; i++ ){
            my_printf(param_1->array[i]);
        }
}