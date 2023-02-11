/*
**
** QWASAR.IO -- my_isalpha
**
** @param {char} param_1
**
** @return {int}
**
*/

int my_isalpha(char param_1){
    if(isupper(param_1) || islower(param_1)){
        return 1;
    }else{
        return 0;
    }
}