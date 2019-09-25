/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_display_file.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/25 15:04:56 by averheij       #+#    #+#                */
/*   Updated: 2019/09/25 17:31:48 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		ft_display_file(char *path)
{
	char	buf[BUF_SIZE];
	int		fd;
	int		ret;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Bad file/path: Open returned -1.\n");
		return (0);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return (1);
}
