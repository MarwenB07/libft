/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:26:42 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/06 11:45:07 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h>
#include "libft.h"

/*
** Description de la fonction : ft_memcmp
**
** La fonction memcmp() compare la chaîne d'octets s1 à la chaîne d'octets s2.
** Les deux chaînes sont supposées avoir une longueur de n octets.
**
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
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
