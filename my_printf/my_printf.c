#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <limits.h>


void put_char(char c);
void print_str(char * param_1);
char *rev_str(char * str);
char* print_h(void * Item);
char * print_number(long long a, char* strex, int b);
int my_printf(char * str, ...);

int main(){
    
}

int my_printf(char * format, ...){
    va_list ap;
    int i = 0, j = 0;
    char buffer[1000] = {0}, temp[200];
    char *argStr;

    va_start(ap, format);
    while (format && format[i] != '\0') {
        if(format[i] == '%'){
            i++;
            switch (format[i]) {
                case 'c': {
                    buffer[j] = (char) va_arg(ap, int);
                    j++;
                    break;
                }
                case 'u':{
                    long long i = va_arg(ap, int);
                    long long t = 4294967296;
                    if(i < 0){
                        i = t + i;
                    }
                    print_number(i, temp, 10);
                    strcpy(&buffer[j], temp);
                    j += strlen(temp);
                    break;
                }
                case 'd':
                case 'i':{
                    print_number(va_arg(ap, int), temp, 10);
                    strcpy(&buffer[j], temp);
                    j += strlen(temp);
                    break;
                }
                case 'p': {
                    argStr = print_h(va_arg( ap, char* ));
                    strcpy(&buffer[j], argStr);
                    j += strlen(argStr);
                    break;
                }
                case 'x': {
                    print_number(va_arg(ap, int), temp, 16);
                    strcpy(&buffer[j], temp);
                    j += strlen(temp);
                    break;
                }
                case 'o': {
                    print_number(va_arg(ap, int), temp, 8);
                    strcpy(&buffer[j], temp);
                    j += strlen(temp);
                    break;
                }
                case 's': {
                    argStr = va_arg(ap, char* );
                    if(!argStr || !*argStr) {
                        strcpy(&buffer[j], "(null)");
                        j += 6;
                    }
                    else {
                        strcpy(&buffer[j], argStr);
                        j += strlen(argStr);
                    }
                    break;
                }
        
            }

        } else {
            buffer[j] = format[i];
            j++;
        }
        i++;
    }
    write(STDOUT_FILENO, buffer, j);
    va_end(ap);
    return j;
}



void put_char(char c)
{
    write(1, &c, 1);
}


void print_str(char *str)
{   
    for(int i = 0;str[i] != '\0';i++){
         put_char(str[i]);
    }

}

char *rev_str(char *str){
    int i;
    int len = 0;
    char b;
    if (!str)
        return NULL;
    while(str[len] != '\0'){
        len++;
    }
    for(i = 0; i < (len/2); i++)
    {
        b = str[i];
        str [i] = str[len - i - 1];
        str[len - i - 1] = b;
    }
    return str;
}


char* print_h(void *Item) {
    uintptr_t i = (uintptr_t) Item;
    char num [(sizeof i * CHAR_BIT + 3)/ 4 + 1];
    char *b = &num[sizeof num] - 1;
    *b = '\0';
    do {
        b--;
        *b = "0123456789abcdefg"[i%16];
        i /= 16;
    } while (b > num);
    char *c;
    c = (char*)malloc(28 * sizeof(char*));
    c[0] = '0';
    c[1] = 'x';
    for(int i = 2; b[i] !='\0'; i++){
        c[i] = b [i + 2];
    }
    return c;

}

char * print_number(long long a, char *strex, int b){

    char *str = strex;
    if(a == 0){
        *strex = '0';
        strex[1] = '\0';
        return 0;
    }
    int num, let = 0;
    if (a < 0) {
        let = 1;
        a *= -1;
    }
    while(a) {
        num = a % b;
        *str = (num > 9) ? ('A' + num - 10) : '0' + num;
        a = a / b;
        str ++;
    }
    if(let)
        *str++ = '-';

    *str = '\0';
    rev_str(strex);
    return strex;
}