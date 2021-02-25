/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoukali <mdoukali@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 21:29:53 by mdoukali          #+#    #+#             */
/*   Updated: 2021/02/24 13:16:22 by mdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		sum;
	char	temp;

	if (nb < 0)
	{
		write(1, "-", 1);
		sum = nb * (-1);
	}
	else
		sum = nb;
	if (sum >= 10)
		ft_putnbr(sum / 10);
	temp = (sum % 10) + '0';
	write(1, &temp, 1);
}
