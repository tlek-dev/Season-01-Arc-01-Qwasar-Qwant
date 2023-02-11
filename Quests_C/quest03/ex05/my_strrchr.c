#include <stdio.h>
#include <string.h>
/*
**
** QWASAR.IO -- my_strrchr
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {char*}
**
*/
char* my_strrchr(char* param_1, char param_2){
    int num = 0;
    while (param_1[num] != '\0') 
        num++;
    while (num--) 
    {
        if (param_1[num] == param_2)
            return (&param_1[num]);
    }
    return (0);
}