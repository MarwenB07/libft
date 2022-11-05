/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:48:25 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/04 07:27:53 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdio.h>

/*
** Description de la fonction : ft_strchr
**
** La fonction strchr() localise la première occurrence de c
** (converti en char) dans la chaîne pointée par s.
** Le caractère nul de fin est considéré faire partie de la chaîne;
** donc si c est `\0', les fonctions localisent le `\0' final.
**
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c  > 127 || c < 0)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
		return (&((char *)s)[i]);
	return (NULL);
}

// main //
 
/*
int main()
{
	int c;
	const char str[] = "bonjour a tous !";

	c = 'a';
	printf("str de base = %s\n\n", str);
	printf("int c = 'a'\n");
	printf("ft_strchr = %c\n", ft_strchr(str, c));
}
*/
