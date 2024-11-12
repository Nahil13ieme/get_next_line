<<<<<<< HEAD
# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Executable name
NAME = get_next_line

# Source files
SRCS = get_next_line.c get_next_line_utils.c main.c
OBJS = $(SRCS:.c=.o)

# Header file
HEADERS = get_next_line.h

# Build the executable
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Compile object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJS)

# Clean up all generated files
fclean: clean
	rm -f $(NAME)

# Recompile everything
re: fclean all

# Run the program with test.txt as input
run: $(NAME)
	./$(NAME) test.txt

.PHONY: all clean fclean re run
=======
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
>>>>>>> bc101de56d606e50406e3c3d6902275c5c0bdf4a
