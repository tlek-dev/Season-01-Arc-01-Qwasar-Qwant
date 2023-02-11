#include "lib.h"

bool my_isdigit(char person) {
    int objectInt = (int)person;
    if (objectInt >= 48 && objectInt <= 57) {
        return true;
    } else {
        return false;
    }
}

bool CheckRounds(int num) {
    if (num > 0 && num < 10) {
        return true;
    } else {
        return false;
    }
}

char generateNum() {
    char num = rand() % (56 - 48 + 1 ) + 48;
    return num;
}

char* generateCode(char* params) {
    int i = 0;
    srand(time(NULL));
    while (i < 4) {
        params[i] = generateNum();
        i++;
    }
    return params;
}

bool CheckInput(char* params) {
    if (strlen(params) != 4) {
        return false;
    }

    for (int i = 0; i < 4; i++) {
        if (my_isdigit(params[i]) == true) {
            return true;
        } else {
            return false;
        }
    }
    return true;
}

bool CheckInput_string(char params[]) {
    if (strlen(params) != 4) {
        return false;
    }

    for (int i = 0; i < 4; i++) {
        if (params[i] < 48 || params[i] > 56) {
            return false;
        }
    }
    return true;
}

int testInput(char* guess, char* code) {
    int well_placed = 0;
    int misplaced = 0;
    int i, j;

    for (i = 0; i < 4; i++) {

        for (j = 0; j < 4; j++) {
            if (i == j && guess[i] == code[j]) {
                well_placed++;
                break;
            }
            
            if (i != j && guess[i] == code[i]) {
                well_placed++;
                break;
            }

            if (i != j && guess[i] == code[j]) {
                misplaced++;
                break;
            }
        }
        
        if (well_placed == 4) {
            return 0;
        }
    }

    printf("Well placed pieces: %d\nMisplaced pieces: %d\n---\n", well_placed, misplaced);

    return 1;
}

int my_strlen(const char *params_1) {
    int count = 0;

    while (*params_1 != '\0') {
        count++;
        params_1++;
        if (count > 100) {
            break;
        }
    }

    return count;
}
