#include <stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main(int num, char **num1){
int num2;
char num3;
int num4 = 1;
while(num4 < num){
    num2 = open(num1[num4],O_RDONLY);
    num4++;
    while(read(num2, &num3, 1) == 1){
        write(1, &num3,1);
    }
    close(num2);
}
}