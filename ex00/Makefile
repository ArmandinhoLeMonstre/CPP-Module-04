NAME = Animal00
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3

RM = rm -rf

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;33m\nCOMPILING Animal00...\n"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32m./Animal00 created\n"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) Animal00

re: fclean all