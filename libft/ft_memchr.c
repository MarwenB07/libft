/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:24:01 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/03 16:27:59 by mbouaza          ###   ########.fr       */
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
	if (((char *)s)[i] == '\0' || c  > 127 || c < 0)
		return (0);
	while (((char *)s)[i] || i < n)
	{
		if (((char *)s)[i] == c)
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
	return (0);
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
