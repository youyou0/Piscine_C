CC	= gcc

NAME	= do-op

SRCS	= $(wildcard *.c)

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -Wextra -Wall -Werror -I../include

LDFLAGS += -L../lib -lmy

all:	$(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)

clean:
	del $(OBJS)

fclean: clean
	del $(NAME)

re: clean fclean all

.PHONY: all
