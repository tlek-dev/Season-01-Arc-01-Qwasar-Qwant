#include <stdio.h>
#include <string.h>
/*
**
** QWASAR.IO -- my_strchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/
char* my_strchr(char* param_1, char param_2)
{
    while (*param_1 != '\0') {
        if (*param_1 == param_2)
            return (param_1);  
        param_1++;
    }
    return (0);
}