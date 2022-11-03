/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:22:03 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/03 09:23:30 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <string.h>
#include <stdio.h>
*/

/*
** Description : ft_strrchr
**
** The strrchr() function is identical to strchr(),
** except it locates the last occurrence of c.
**
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c)
			return (s + i);
		i--;
	}
	return (0);
}

// main //

/*
int main()
{
	int c;
	const char str[] = "bonjour a tous a !";

	c = 'a';
	printf("str de base = %s\n\n", str);
	printf("int c = 'a'\n");
	printf("ft_strchr = %cs\n", ft_strrchr(str, c));
}
*/