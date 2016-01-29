##
## Makefile for  in /home/thomas/Documents/epitech/CPE_2015_Pushswap
## 
## Made by Thomas Henon
## Login   <thomas.henon@epitech.eu>
## 
## Started on  Mon Nov 16 11:18:58 2015 Thomas Henon
## Last update Sat Nov 21 19:55:06 2015 Thomas Henon
##

NAME	= push_swap

GCC	= gcc

RM	= rm -f

SRCS	=	main.c \
		linked_lists.c \
		push_swap.c \
		algo_smallest_first.c \
		linked_lists2.c

CFLAGS	= -g
CFLAGS += -l my -L ./my -I ./my
##CFLAGS += -l my_list -L ./my_list -I ./my_list

LDFLAGS	=

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(GCC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

all: $(NAME)

re: fclean all
	mr_clean

.PHONY: all clean fclean re test
