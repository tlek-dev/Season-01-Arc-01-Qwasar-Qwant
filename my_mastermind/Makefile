CC = gcc

my_mastermind: my_mastermind.o functions.o
	$(CC) -o my_mastermind my_mastermind.o functions.o

helper_functions.o: functions.c lib.h
	$(CC) -O -c functions.c

my_mastermind.o: my_mastermind.c lib.h
	$(CC) -O -c my_mastermind.c

clean:
	rm -f *.o

fclean: clean
	rm -f my_mastermind

re: fclean all