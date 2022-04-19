NAME := push_swap

gcc := gcc

CFLAGS := -Wall -Wextra -Werror -Iheaders/

SOURCE := logic/*.c

all:
	make -C $(SOURCE)
	$(CC) $(CFLAGS) -o $(NAME)

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all
