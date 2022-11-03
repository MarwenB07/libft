/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:10:00 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/02 06:55:56 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description de la fonction : ft_strnstr
**
** La fonction strnstr() localise la première occurrence de l'aiguille 
** de chaîne terminée par un caractère nul dans la chaîne haystack,
** où il n'y a pas plus de len caractères cherché.
** Les caractères qui apparaissent après un caractère `\0'
** ne sont pas recherchés. La fonction strnstr() étant une API
** spécifique à FreeBSD, elle ne doit être utilisée que lorsque
** la portabilité n'est pas un problème.
**
*/

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0' || len <= 0)
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i] || (i + j) < len)
		{
			j++;
			if (j == ft_strlen(needle))
				return (haystack + i);
		}
		i++;
	}
	return (0);
}
