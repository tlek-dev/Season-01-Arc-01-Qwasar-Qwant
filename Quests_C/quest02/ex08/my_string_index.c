/*
**
** QWASAR.IO -- my_string_index
**
** @param {char*} param_1
** @param {char} param_2
**
** @return {int}
**
*/

int my_string_index(char* param_1, char param_2){

int num1 = 0;
int num2 = strlen(param_1);
int num3 = 0;
while(num1 < num2){
    if(param_1[num1] == param_2){
       num3 = num1;
        break;
    }else{
        num3 = -1;
    }
    num1++;
}
return num3;
}