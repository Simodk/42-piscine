/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoukali <mdoukali@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:19:28 by mdoukali          #+#    #+#             */
/*   Updated: 2021/02/24 10:28:18 by mdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				f;

	i = 0;
	f = 0;
	while (f == 0 && (i < n) && (n != 0))
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (f);
		if (s1[i] > s2[i])
			f = 1;
		else if (s1[i] < s2[i])
			f = -1;
		i++;
	}
	return (f);
}

int main()
{
	char s1[]="abc";
	char s2[]="abc";

	printf("%d\n",ft_strncmp(s1,s2,4));
	return(0);
}

