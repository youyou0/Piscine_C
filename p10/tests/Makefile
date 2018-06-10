
CC	= 	gcc

NAME	= 	utest

SRCS	= 	$(wildcard *.c) \
		..\my_sort_word_array.c

OBJS	= 	$(SRCS:.c=.o)

CFLAGS	+= 	-Wextra -Wall -Werror -I../include -g3

LDFLAGS += 	-L../lib -lmy

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
		del $(OBJS)

fclean: 	clean
		del $(NAME)

re: 		clean fclean all

.PHONY: 	all
