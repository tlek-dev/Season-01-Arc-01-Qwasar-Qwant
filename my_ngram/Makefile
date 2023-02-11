all: my_ngram

test:
	echo "Makefile test"

compile:
	gcc -Wall -Wextra -Werror my_ngram.c && ./a.out "abcdef"

win:
	gcc -Wall -Wextra -Werror my_ngram.c && ./a.out "aaabb" "abc"

clean: 
	rm -f *.o

fclean: clean
	rm -f my_ngram

re: fclean all