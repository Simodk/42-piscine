/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoukali <mdoukali@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:12:25 by mdoukali          #+#    #+#             */
/*   Updated: 2021/02/25 14:05:57 by mdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int i;
	int k;

	if (nb == 0)
		return (1);
	if ((nb == 1) || (nb == 2))
		return (nb);
	if (nb <= 0)
		return (0);
	i = 3;
	k = 2;
	while (i <= nb)
	{
		k *= i;
		i++;
	}
	return (k);
}
