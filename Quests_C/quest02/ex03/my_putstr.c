/*
**
** QWASAR.IO -- my_putstr
**
** @param {char*} param_1
**
** @return {void}
**
*/

void my_putstr(char* str){
    int num1 = strlen(str);
    write(1, str, num1);
}