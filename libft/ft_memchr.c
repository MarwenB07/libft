/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:24:01 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/06 19:55:42 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** Description of : ft_memchr
**
** The memchr() function locates the first occurrence of c 
** (converted to an unsigned char) in string s.
**
** Denji solo.
**
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}

// main //

/*
int main()
{
	int c;
	unsigned char str[] = "bonjour a tous !";

	c = 'a';
	printf("str de base = %s\n\n", str);
	printf("int c = 'a'\n");
	printf("ft_memchr = %c\n", ft_memchr(str, c, 15));
}
*/
