/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:40:58 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/01 14:50:07 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description de la fonction : ft_substr
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
	char	*newchaine;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	if (!(newchaine == (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		newchaine[i++] = s[start++];
	}
	newchaine[i] = '\0';
	return (newchaine);
}
