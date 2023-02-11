/*
**
** QWASAR.IO -- my_strstr
**
** @param {char*} param_1
** @param {char*} param_2
**
** @return {char*}
**
*/

char* my_strstr(char* param_1, char* param_2){
  int  num = 0;

  if (param_1[0] != '\0'){ 
      while (param_2[num] != '\0'){
	  if (param_2[num] != param_1[num])
	    return (my_strstr(param_1 + 1, param_2));
	  num = num + 1;
	}
      return (param_1);
    }
  else
    return(0);
}