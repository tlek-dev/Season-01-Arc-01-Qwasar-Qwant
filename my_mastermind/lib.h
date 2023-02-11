#ifndef MY_MASTERMIND_H
#define MY_MASTERMIND_H
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

bool my_isdigit(char person);
bool CheckRounds(int num);
char generateNum();
char* generateCode(char* code);
bool CheckInput(char* param);
bool CheckInput_string(char param[]);
int testInput(char* guess, char* code);
int my_strlen(const char *param_1);

#endif