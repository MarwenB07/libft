/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 08:17:36 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/07 08:22:01 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>
#include <string.h>
*/

/*
** Description of : ft_memset
**
** writes len bytes of value c (converted to an unsigned char)
** to the string b.
**
** Read Berserk !!!!
**
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

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
