/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:53:31 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/05 09:30:14 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/*
** Description de la fonction : ft_strlcat
**
** strlcat() ajoute la chaîne src à la fin de dst.
** Il ajoutera au plus dstsize - strlen(dst) -
** 1 caractères. Il se terminera alors par NUL,
** à moins que dstsize ne soit 0 ou que la chaîne dst d'origine ait été
** plus long que dstsize (en pratique, cela ne devrait 
** pas se produire car cela signifie que soit dstsize est
** incorrect ou que dst n'est pas une chaîne correcte).
**
*/

/* REGLE STRLCAT :
**
** dstsize = 0 / src + dstsize
** dstsize <= dst / src + dstsize
** Dstsize > dst < dst + src / dst + src + concatene jusqu'a dstsize
** Sinan taille est + src
**
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	if (dstsize == 0 || dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	i = ft_strlen(dst);
	j = 0;
	while (src[j] != 0 && i + 1 < dstsize)
	{
		dst[i] = src[j++];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}

// main //

/*
int main()
{
	char v1[20] = "coucou";
	const char v2[20] = "marwen";
	int i = 12;
	int a;
	int l;
	char s1[20] = "coucou";
	const char s2[20] = "marwen";

	l  = ft_strlcat(v1, v2, i);
	printf("Mon ft_strlcat = %s %d\n", v1, l);
	a = strlcat(s1, s2, i);
	printf("Le vrai strlcat : %s %d\n", s1, a);
}
*/
