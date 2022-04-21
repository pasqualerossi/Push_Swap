NAME = push_swap

CC = gcc

FLAGS = -Wall -Wextra -Werror

SOURCES  = 	main.c \
		   ./logic/free_stacks.c \
		   ./logic/ft_split.c \
		   ./logic/is_only_numbers.c \
		   ./logic/is_stack_sorted.c \
		   ./logic/libft.c \
		   ./logic/number_limits.c \
		   ./logic/parameters.c \
		   ./logic/reallocation.c \
		   ./logic/repeated_numbers.c \
		   ./logic/seperate_numbers.c \
		   ./logic/sort_3_numbers.c \
		   ./logic/sort_5_numbers.c \
		   ./logic/sort_beyond_3_and_5_numbers.c \
		   ./logic/stack_size.c \
		   ./operations/push.c \
		   ./operations/reserve.c \
		   ./operations/rotate.c \
		   ./operations/swap.c \

OBJECTS = $(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(CC) $(FLAGS) $(SOURCES) -Iheaders -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o
	@rm -rf ./operations/*.o
	@echo "cleaning the .o files"

fclean: clean
	@rm -rf $(NAME)

re: fclean all
