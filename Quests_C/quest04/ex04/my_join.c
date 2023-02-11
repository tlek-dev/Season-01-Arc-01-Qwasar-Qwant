#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <sys/cdefs.h>
#include <stdio.h>
#include <assert.h>

/*
**
** QWASAR.IO -- my_join
**
** @param {string_array*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array{
    int size;
    char** array;
} string_array;
#endif

int length (char* interval){
    int counter = 0;
        for(int num = 0; interval[num] != '\0'; num++){
        counter++;
    }
    return counter;
}

char* my_join(string_array* param_1, char* param_2)
{
    char num1[20]={""};
    char* string = (char*)malloc(sizeof(char)*100);
    if(param_1->size == 0){
        string = NULL;
    }else{
        for (int i = 0 ; i < param_1->size; i++){
            for(int j = 0 ; j < length(param_1->array[i]) ; j++){
                strcpy (num1,param_1->array[i]);
                if ( i == param_1->size -1  && j == length(param_1->array[i]) -1){
                    strcat(num1, "");
                }
                else{
                    strcat(num1, param_2);
                } 
            }
        strcat(string, num1);
        }
    }
    return string;
}