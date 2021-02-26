/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radelwar <radelwar@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 09:20:51 by radelwar          #+#    #+#             */
/*   Updated: 2021/02/24 06:40:46 by radelwar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					create_array(int ac, char **av, t_stock_str *stock_strs)
{
	int			c_array;
	int			c_str;

	c_array = 0;
	while (c_array < ac)
	{
		c_str = 0;
		while (av[c_array][c_str])
			c_str++;
		stock_strs[c_array].size = c_str;
		stock_strs[c_array].str = malloc(sizeof(char) * c_str + 1);
		stock_strs[c_array].copy = malloc(sizeof(char) * c_str + 1);
		c_str = 0;
		while (av[c_array][c_str])
		{
			stock_strs[c_array].str[c_str] = av[c_array][c_str];
			stock_strs[c_array].copy[c_str] = av[c_array][c_str];
			c_str++;
		}
		stock_strs[c_array].str[c_str] = '\0';
		stock_strs[c_array].copy[c_str] = '\0';
		c_array++;
	}
	return (c_array);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock_strs;
	int			c_array;

	if (ac < 1)
		return (0);
	stock_strs = malloc(sizeof(t_stock_str) * (ac + 1));
	c_array = create_array(ac, av, stock_strs);
	stock_strs[c_array].size = 0;
	stock_strs[c_array].str = malloc(sizeof(char));
	stock_strs[c_array].copy = malloc(sizeof(char));
	return (stock_strs);
}
