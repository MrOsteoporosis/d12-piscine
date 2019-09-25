/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_display_file.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/25 15:04:56 by averheij       #+#    #+#                */
/*   Updated: 2019/09/25 17:31:42 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE];
	int		fd;
	int		ret;

	if (argc > 2)
		return (error(1));
	else if (argc < 2)
		return (error(2));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (error(3));
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return (1);
}

int		ft_error(int e)
{
	if (e == 1)
		ft_putstr("Too many arguements.\n");
	else if (e == 2)
		ft_putstr("File name missing.\n");
	else if (e == 3)
		ft_putstr("Bad file/path: Open returned -1.\n");
	return (0);
}
