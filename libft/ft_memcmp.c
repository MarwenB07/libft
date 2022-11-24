/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:26:42 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/06 12:52:45 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h>
#include "libft.h"

/*
** Description of : ft_memcmp
**
** compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
**
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

// main //

/*
int main()
{
	int i;

	unsigned char s1[6] = "coucou";
	unsigned char s2[6] = "coucou";
	i = ft_memcmp(s1, s2, 6);
	printf("%d", i);
}
*/
