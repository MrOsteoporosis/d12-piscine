# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: averheij <averheij@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/09/25 16:08:05 by averheij       #+#    #+#                 #
#    Updated: 2019/09/25 16:44:25 by averheij      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

_SRC = ft_cat.c ft_display_file.c ft_putchar.c ft_putstr.c
SDIR = ./srcs
SRC = $(patsubst %,$(SDIR)/%, $(_SRC))

IDIR = ./includes

all: $(NAME)

$(NAME):
	gcc -Werror -Wall -Wextra $(SRC) -iquote$(IDIR) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)