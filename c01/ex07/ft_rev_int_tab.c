/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoukali <mdoukali@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 13:38:52 by mdoukali          #+#    #+#             */
/*   Updated: 2021/02/23 13:44:40 by mdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;
	int	x;
	int	rev[size];

	i = size - 1;
	j = 0;
	k = 0;
	x = 0;
	while (i >= 0)
	{
		x = tab[i];
		rev[j] = x;
		j++;
		i--;
	}
	while (k < size)
	{
		tab[k] = rev[k];
		k++;
	}
}
