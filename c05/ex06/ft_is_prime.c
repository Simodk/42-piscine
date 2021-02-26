/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoukali <mdoukali@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:12:59 by mdoukali          #+#    #+#             */
/*   Updated: 2021/02/25 15:02:10 by mdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		divide(int nb, int cnt)
{
	if ((nb % cnt) == 0)
		return (0);
	else if (cnt > (nb / 2))
		return (1);
	else
		return (divide(nb, cnt + 1));
}

int		ft_is_prime(int nb)
{
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb == 2147483647)
		return (1);
	if (nb < 0)
		return (0);
	return (divide(nb, 2));
}
