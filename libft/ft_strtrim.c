/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:42:26 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/05 15:59:31 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*
** Description of : ft_strtrim
**
** Alloue (avec malloc(3)) et retourne une copie de
** la chaîne ’s1’, sans les caractères spécifiés
** dans ’set’ au début et à la fin de la chaîne de
** caractères.
**
*/

static size_t ft_start(char const *s1, char const *set)
{
	size_t i;
	size_t j;

	j = 0;
	i = 0;
	while (set[j])
	{
		if (set[j] == s1[i])
		{
			i++;
			j = 0;
		}
		j++;
	}
	return (i);
}

static size_t ft_end(char const *s1, char const *set)
{
	size_t i;
	size_t j;

	j = ft_strlen(s1);
	i = 0;
	while (set[i])
	{
		if (set[j] == s1[i])
		{
			i--;
			j = 0;
		}
		j++;
	}
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t start;
	size_t end;
	char *str;

	start = ft_start(s1, set);
	end = ft_end(s1, set);
	end = end - start;
	malloc((sizeof)char)

	return (str);
}


int main()
{
	char const *n = "**oui**"; 
	printf("%s", ft_strtrim(n, "*o"));
}
