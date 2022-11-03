/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 07:24:06 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/03 08:15:02 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/*
** Description de la fonction : ft_strlcpy
**
** La fonction strlcpy() copie jusqu'à taille - 1 
** caractères de la chaîne src terminée par NUL vers dst,
** terminant le résultat par NUL.
**
*/

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;


	i = 0;
	if (ft_strlen(src) == 0)
	{
		dst[i] = '\0';
		return (0);
	}
	while (i < dstsize && src[i])
	{
		if (dstsize > i)
			dst[i] = src[i];
		i++;
	}
	j = i;
	return (i);
}

int main()
{
	char dst[15] = "et ouiiijcjcjcjcjc";
	const char src[] = "j";
	size_t i = 6;
	size_t a = 0;

	a = ft_strlcpy(dst, src, i);
	printf("%s et %d", dst, a);


}
