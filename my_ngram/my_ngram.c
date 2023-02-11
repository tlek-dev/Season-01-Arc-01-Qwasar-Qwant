#include <stdio.h>

void fill_arr(int* var, int value, int ext){
    for(int i=0; i < ext; i++){
        var[i] = value;
    }
}
void increment_arr(char* string, int* var)
{
    int num;
        for(int i=0; string[i] != '\0'; i++)
    {
         num = (int)string[i];
                var[num] += 1;

    }
}

int main(int argc, char** argv)
{
    int var[126];
    fill_arr(var, 0, 126);
        for(int i = 1; i < argc; i++){
            increment_arr(argv[i], var);
    }

    for(int i=0; i < 126; i++)
    {
        if(var[i] > 0)
        {
            printf("%c:%d\n", (char)i, var[i]);
        }
    }

    return 0;
}