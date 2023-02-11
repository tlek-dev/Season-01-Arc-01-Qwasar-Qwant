#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* my_spaceship(char* param_1)
{
    int x = 0;
    int y = 0;
    char board[5] = "up";

    char r[5] = "right";
    char l[5] = "left";
    char d[5] = "down";
    char u[5] = "up";
    char* num;
    num = (char*) malloc(40 * sizeof(char));
    int o = 0;
    for(int num1 = 0; param_1[num1] != '\0'; num1++){
        if(param_1[num1] == 'R'){
            if(board[o] == r[o]){
                strcpy(board, d);
            }
            else if(board[o] == l[o]){
                strcpy(board, u);
            }
            else if(board[o] == d[o]){
                strcpy(board, l);
            }
            else if(board[o] == u[o]){
                strcpy(board, r);
            }
        }
        else if(param_1[num1] == 'L'){
            if(board[0] == r[0]){
                strcpy(board, u);
            }
            else if(board[0] == u[0]){
                strcpy(board, l);
            }
            else if(board[0] == l[0]){
                strcpy(board, d);
            }
            else if(board[0] == d[0]){
                strcpy(board, r);
            }
        }
        else if(param_1[num1] == 'A'){
            if(board[0] == r[0]){
                x++;
            }
            else if(board[0] == u[0]){
                y--;
            }
            else if(board[0] == l[0]){
                x--;
            }
            else if(board[0] == d[0]){
                y++;
            }
        }
    }
    snprintf( num, 40, "{x: %d, y: %d, direction: '%s'}", x, y, board);
    return num;
}