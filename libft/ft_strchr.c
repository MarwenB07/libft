/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:48:25 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/03 08:56:47 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <string.h>
#include <stdio.h>
*/

/*
** Description de la fonction : ft_strchr
**
** La fonction strchr() localise la première occurrence de c
** (converti en char) dans la chaîne pointée par s.
** Le caractère nul de fin est considéré faire partie de la chaîne;
** donc si c est `\0', les fonctions localisent le `\0' final.
**
*/

char	*ft_strchr(const char *src, int c)
{
	int	i;

	i = 0;
	if (src[i] == '\0' || c  > 127 || c < 0)
		return (0);
	while (src[i])
	{
		if (src[i] == c)
		{
			return (src[i]);
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
	const char str[] = "bonjour a tous !";

	c = 'a';
	printf("str de base = %s\n\n", str);
	printf("int c = 'a'\n");
	printf("ft_strchr = %c\n", ft_strchr(str, c));
}
*/
