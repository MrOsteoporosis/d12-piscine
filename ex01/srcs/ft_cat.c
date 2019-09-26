/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_cat.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/25 16:28:26 by averheij       #+#    #+#                */
/*   Updated: 2019/09/26 08:55:47 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
		ft_catecho();
	i = 1;
	while (i < argc)
	{
		ft_catarg(argv[i]);
		i++;
	}
}

int		ft_catarg(char *arg)
{
	if (arg[0] == '-')
	{
		ft_catecho();
		return (1);
	}
	ft_display_file(arg);
	return (1);
}

void	ft_catecho(void)
{
	char	input[BUF_SIZE];
	int		i;
	int		ret;

	while (1)
	{
		i = 0;
		while (i < BUF_SIZE)
			input[i++] = 0;
		ret = read(1, input, BUF_SIZE);
		input[ret] = '\0';
		ft_putstr(input);
	}
}
