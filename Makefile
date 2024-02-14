HEADER = printf.h
CC = gcc
CFILES = ft_printf.c\
		 ft_putstr.c\
		 ft_putchar.c\
		 ft_itoa.c\
		 ft_itoa_hex.c\
		 ft_ppointer.c

COBJECTS =$(CFILES:%.c=%.o)
FLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

%.o : %.c 
		$(CC) $(FLAGS) -c $^  -o $@ 

$(NAME) : $(OFILES) 
		ar -r $@ $^

all : $(NAME)

clean:
		rm -r $(COBJECTS)

flclean: clean
		rm libftprintf.a

re:
