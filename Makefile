HEADER = libftprintf.h
CC = gcc
CFILES = ft_printf.c\
		 main.c\
		 ft_putstr.c\
		 ft_printop.c\
		 ft_putchar.c\
		 ft_itoa.c\
		 ft_itoa_hex.c\
		 ft_tolower.c

FLAGS = -Wall -Werror -Wextra

NAME = app

$(NAME) : $(CFILES)
		$(CC) $(FLAGS) $(CFILES) -o $(NAME)
