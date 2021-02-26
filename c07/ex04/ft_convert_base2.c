/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 07:34:18 by radelwar          #+#    #+#             */
/*   Updated: 2021/02/23 07:34:30 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		storage_demand(int nbr, int base_length)
{
	int c_bytes;

	c_bytes = 0;
	if (nbr < 0)
	{
		nbr *= (-1);
		c_bytes++;
	}
	while (nbr > 0)
	{
		c_bytes++;
		nbr /= base_length;
	}
	return (c_bytes);
}
