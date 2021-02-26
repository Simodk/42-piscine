/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoukali <mdoukali@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:12:35 by mdoukali          #+#    #+#             */
/*   Updated: 2021/02/25 15:15:45 by mdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int nbo;

	if (power < 0)
		return (0);
	if (!power)
		return (1);
	i = 1;
	nbo = nb;
	while (i++ < power)
		nb *= nbo;
	return (nb);
}
