/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:40:58 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/05 10:35:14 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description of : ft_substr
**
** Alloue (avec malloc(3)) et retourne une chaîne de
** caractères issue de la chaîne ’s’.
** Cette nouvelle chaîne commence à l’index ’start’ et
** a pour taille maximale ’len’.
**
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t end;
	char	*newchaine;

	i = 0;
	if (!s)
		return (0);
	end = len - start;
	i = ft_strlen(s);
	newchaine = malloc(sizeof(char) * (end + 1));
	if (!newchaine)
		return (0);
	end = 0;
	while (start < len)
	{
		newchaine[end] = s[start];
		end++;
		start++;
	}
	newchaine[start] = '\0';
	return (0);
}
