#include <string.h>
#include <stdlib.h>
/*
**
** QWASAR.IO -- my_strdup
**
** @param {char*} param_1
**
** @return {char*}
**
*/

char* my_strdup(char* param_1)
{

char* dup = malloc(sizeof(char) * strlen(param_1) + 1); int len = strlen(param_1);
    for(int i = 0; i < len; i++){
        dup[i] = param_1[i];
    }
            dup[len] = '\0';
                return dup;
}

/*return param_1; <= can also be simplified like this.*/