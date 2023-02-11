#include <stdio.h>
#include <string.h>
/*
**
** QWASAR.IO -- my_strncpy
**
** @param {char*} param_1
** @param {char*} param_2
** @param {int} param_3
**
** @return {char*}
**
*/

char* my_strncpy(char* param_1, char* param_2, int param_3){
    int num = 0;

    while (num < param_3) {
        param_1[num] = param_2[num];
        num++;
    }
    param_1[num] = '\0';
return (param_1);
}
