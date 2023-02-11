#include <stdio.h>
#include <string.h>
/*
**
** QWASAR.IO -- reverse_string
**
** @param {char*} param_1
**
** @return {char*}
**
*/ 

char* reverse_string(char* param_1){
    int num = 0;

    while (param_1[num] != '\0')
        num++;

    int left = 0;
    int right = num - 1;
    char num1;

    while (left < right) {

        num1 = param_1[left];
        param_1[left] = param_1[right];
        param_1[right] = num1;
        left++;
        right--;
    }
    return (param_1);
}