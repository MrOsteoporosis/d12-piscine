# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: averheij <averheij@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/09/25 14:44:01 by averheij       #+#    #+#                 #
#    Updated: 2019/09/25 16:14:47 by averheij      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

_SRC = ft_display_file.c ft_putchar.c ft_putstr.c
SDIR = ./srcs
SRC = $(patsubst %,$(SDIR)/%, $(_SRC))

IDIR = ./includes

all: $(NAME)

$(NAME):
	gcc -Werror -Wall -Wextra $(SRC) -iquote$(IDIR) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)