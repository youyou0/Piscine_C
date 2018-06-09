CC	= gcc

NAME	= libmy.a

SRCS	= $(wildcard *.c)

OBJS	= $(SRCS:.c=.o)

CFLAGS	+= -Wextra -Wall -Werror -I..\..\include\

all:	$(NAME)

$(NAME):$(OBJS)
	ar rcs ..\$(NAME) $(OBJS)

clean:
	del $(OBJS)

fclean: clean
	del ..\$(NAME)
