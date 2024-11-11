# Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source Files
SRCS = get_next_line.c get_next_line_utils.c main.c
OBJS = $(SRCS:.c=.o)

# Name
NAME = gnl


# Compilation rule

ALL: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -g

# Clean object files
clean:
	rm -f $(OBJS)

# Clean everything including the executable
fclean: clean
	rm -f $(NAME)

# Rebuild the project
re: fclean all

# Rule to test with test.txt as input
test: $(NAME)
	./$(NAME) test.txt

# Phony targets
.PHONY: all clean fclean re test