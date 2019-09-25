/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_cat.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/25 16:27:24 by averheij       #+#    #+#                */
/*   Updated: 2019/09/25 17:26:38 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H
# include "ft_display_file.h"
# include "ft_libft.h"
# define BUF_SIZE 16

int		main(int argc, char **argv);
int		ft_catarg(char *arg);
void	ft_catecho(void);
#endif
