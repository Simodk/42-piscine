/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoukali <mdoukali@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:57:31 by mdoukali          #+#    #+#             */
/*   Updated: 2021/02/17 16:58:20 by mdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printnum(char n1, char n2, char n3)
{
	ft_putchar(n1);
	ft_putchar(n2);
	ft_putchar(n3);
	if (n1 != '7' || n2 != '8' || n3 != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				printnum(i + '0', j + '0', k + '0');
				++k;
			}
			++j;
		}
		++i;
	}
}
