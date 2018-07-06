CC	=	gcc

AR	= 	ar rcs

NAME	= 	libbtree.a

SRCS	=	$(wildcard *.c)

OBJS	= 	$(SRCS:.c=.o)

CFLAGS	+= 	-Wextra -Wall -Werror -I./include/ -g3

LDFLAGS += 	-L./lib/ -lmy

all:		$(NAME)

$(NAME):	$(OBJS)
		$(AR) lib/$(NAME) $(OBJS)

clean:
		del $(OBJS)

fclean: 	clean
		del $(NAME)

re: 		clean fclean all

.PHONY: 	all
