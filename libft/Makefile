NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . ! -name "ft_lst*.c" ! -name "*_test.c" -name "ft_*.c")
BONUS = $(shell find . -name "ft_lst*.c")
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o
	ar rc libft.so *.o
	mv *.o srcs/
bonus:
	gcc $(FLAG) -c $(BONUS)
	ar rc $(NAME) *.o
so:
	$(CC) -nostartfiles -fPIC $(FLAG) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
clean:
	/bin/rm -f  srcs/*.o *.o
fclean: clean
	/bin/rm -f $(NAME) libft.so a.out
re: fclean all

# For Tests
ft_%:
	gcc $(FLAG) $(SRC) tests/$@_test.c

testp1: re
	bash ../Libftest/grademe.sh -l -p2 -b


testp2: re
	bash ../Libftest/grademe.sh -l -p1 -b

.PHONY: all bonus clean fclean re