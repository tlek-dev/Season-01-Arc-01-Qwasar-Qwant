/*
**
** QWASAR.IO -- my_downcase
**
** @param {char*} param_1
**
** @return {char*}
**
*/

char* my_downcase(char* param_1){

if(strlen(param_1) == 0){
        return "";
    }
    for (int num1 = 0; num1 <= strlen(param_1) -1; num1++){
        if(param_1[num1] < 91 && param_1[num1] > 64){
            param_1[num1] += 32;
        }
        
    }
    return param_1;
}