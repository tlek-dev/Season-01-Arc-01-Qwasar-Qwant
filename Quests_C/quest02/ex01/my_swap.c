/*
**
** QWASAR.IO -- my_swap
**
** @param {int*} param_1
** @param {int*} param_2
**
** @return {void}
**
*/

void my_swap(int *x, int *y){ 
    int num;
    num = *x; *x = *y; *y = num;
}