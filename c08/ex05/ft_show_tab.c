/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 19:27:41 by radelwar          #+#    #+#             */
/*   Updated: 2021/02/24 06:47:23 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	write_rest(int nb)
{
	char	digit;

	if (nb < 0 && nb > (-10))
	{
		digit = '-';
		write(1, &digit, 1);
		digit = (nb * (-1)) + '0';
		write(1, &digit, 1);
	}
	if (nb >= 0 && nb < 10)
	{
		digit = nb + '0';
		write(1, &digit, 1);
	}
}

void	ft_putnbr(int nb)
{
	char	digit;
	int		modulo;

	if (nb >= 10 || nb <= -10)
	{
		modulo = nb % 10;
		if (modulo < 0)
			digit = (modulo * (-1)) + '0';
		else
			digit = modulo + '0';
		nb /= 10;
		ft_putnbr(nb);
		write(1, &digit, 1);
		nb *= 10;
	}
	write_rest(nb);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		counter;

	counter = 0;
	if (!par)
		return ;
	while (par[counter].str[0])
	{
		ft_putstr(par[counter].str);
		write(1, "\n", 1);
		ft_putnbr(par[counter].size);
		write(1, "\n", 1);
		ft_putstr(par[counter].copy);
		write(1, "\n", 1);
		counter++;
	}
}
