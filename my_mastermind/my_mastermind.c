#include "lib.h"

int main(int ac, char **av) {
    char* code = malloc(4 * sizeof(char));
    char* secret_code = malloc(4 * sizeof(char));
    int rounds = 10;

    if (ac == 1) {
        secret_code = generateCode(code);
    }

    for (int i = 1; i < ac; i++) {
        if (strcmp(av[i], "-c") == 0) {
            if (CheckInput(av[i + 1]) == true) {
                printf("Set successfully!\n");
                int j = 0;
                while (j < 4) {
                    code[j] = av[i + 1][j];
                    j++;
                }
                secret_code = code;
            } else if (CheckInput(av[i + 1]) == false) {
                printf("%s Incorrect code! The code will be randomly generated.\n", av[i + 1]);
                secret_code = generateCode(code);
            }
        }
        if (strcmp(av[i], "-t") == 0) {
            if (ac == 3) {
                secret_code = generateCode(code);
            }

            if (CheckRounds(atoi(av[i + 1])) == true) {
                printf("valid rounds\n");
                rounds = atoi(av[i + 1]);
            } else {
                printf("You didn't specify a round, 10 will be set.\n");
            }
        }
    }    
    printf("secret code: ");
    for (int i = 0; i < strlen(secret_code); i++) {
        printf("%c", secret_code[i]);
    }
    printf("\n");

    printf("Will you find the secret code?\nPlease enter a valid guess\n---\n");

    int attempts = 0;

    while (attempts < rounds) {
        printf("Round %d\n", attempts + 1);

        char user_guess[100];
        char c;
        int i = 0;

        while (read(0, &c, 1) >= 0 && c != '\n') {
            user_guess[i] = c;

            i++;
        }
        user_guess[i] = '\0';

        printf("user_guess: %s\n", user_guess);

        if (CheckInput_string(user_guess) == true) {
            printf("user_guess check\n");
            if (testInput(user_guess, secret_code) == 0) {
                printf("Congratz! You did it!\n");
                return 0;
            }
            attempts++;
        } else {
            if (my_strlen(user_guess) == 0) {
                printf("under review\n");
                return 0;
            }
            for (int i = 0; i < my_strlen(user_guess); i++) {
                printf("failed check, user_guess[%i]: %d\n" , i, user_guess[i]);
                if (user_guess[i] == 0) {
                    printf("EOT\n");
                    return 0;
                }
            }
            printf("user_guess not valid\n");
        }
        
    }

    printf("You didn't find the secret code!the secret code was: ");
    for (int i = 0; i < strlen(secret_code); i++) {
        printf("%c", secret_code[i]);
    }
    printf("\n");

    return 0;
}