/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/23 16:24:48 by averheij       #+#    #+#                */
/*   Updated: 2019/09/25 15:23:28 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n / 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}
