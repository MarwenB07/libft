/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 08:17:36 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/04 08:54:31 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>
#include <string.h>
*/

/*
** Description de la fonction : ft_memset
**
** La fonction memset() écrit len octets de valeur c
** (convertis en un caractère non signé) dans la chaîne b.
**
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i++] = c;
	}
	return (b);
}

// main //

/*
int main()
{
	char c[10];
	int a = 'a';
	int i;

	i = 0;
	ft_memset(c, a, 10);
	printf("char *c = ");
	while (i < 10)
	{
		printf("%c", a);
		i++;
	}
	printf("\n");
}
*/
