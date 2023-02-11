/*
**
** QWASAR.IO -- my_strlen
**
** @param {char*} param_1
**
** @return {int}
**
*/

int my_strlen(char* str){
	int num;
	num = 0;
	while(str[num] != '\0'){
		num = num + 1;
	}
	return (num);
}