/*
**
** QWASAR.IO -- my_first_struct
**
** @param {integer_array*} param_1
**
** @return {void}
**
*/
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array{
    int size;
    int* array;
} integer_array;
#endif

void my_first_struct(integer_array* param_1){
	char num = 0;

	if ( param_1 -> size == 0 ){
		printf("0\n");
	}
	else{
		printf("%d\n", param_1 -> size);
		while ( num < param_1 -> size ){
			printf("%d\n", param_1 -> array[num]);
			num++;
		}
    }
}