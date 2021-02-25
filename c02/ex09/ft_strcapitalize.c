/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoukali <mdoukali@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 00:43:21 by mdoukali          #+#    #+#             */
/*   Updated: 2021/02/25 11:15:36 by mdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >=  ' '&& str[i] <= '/')
			c = 1;
		else if (str[i] >= '0' && str[i] <= '9')
			c = 0;
		else if ((i == 0 || c == 1) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			c = 0;
		}
		else if (c == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
