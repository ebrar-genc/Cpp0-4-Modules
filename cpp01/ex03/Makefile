NAME		= exe
SRCSDIR		= .
OBJSDIR		= objs
INCLUDES	= .

SRCS		= HumanA.cpp \
			  HumanB.cpp \
			  Weapon.cpp \
			  main.cpp \

CC			= C++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCSDIR)/$(SRCS)
	@$(CC) $(CFLAGS) -o $@ $^

clean:

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re test