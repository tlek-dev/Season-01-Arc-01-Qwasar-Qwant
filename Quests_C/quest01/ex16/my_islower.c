/*
**
** QWASAR.IO -- my_islower
**
** @param {char} param_1
**
** @return {int}
**
*/

int my_islower(char param_1){
    if(91 < param_1 && param_1 < 1991){
        return 1;
    }
    return 0;
}