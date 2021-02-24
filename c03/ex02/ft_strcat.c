/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoukali <mdoukali@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 10:21:22 by mdoukali          #+#    #+#             */
/*   Updated: 2021/02/24 10:36:22 by mdoukali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int dest_i;
	int src_i;

	dest_i = 0;
	while (dest[dest_i] != '\0')
		dest_i++;
	src_i = 0;
	while (src[src_i] != '\0')
	{
		dest[dest_i] = src[src_i];
		dest_i++;
		src_i++;
	}
	dest[dest_i] = '\0';
	return (dest);
}

int        main(void)
{
    char dest[] = "Hello";
    char src[] = " World";

    printf("said %s \n", ft_strcat(dest, src));
    return (0);
}
