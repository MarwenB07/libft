/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:53:31 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/06 12:51:17 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/*
** Description de la fonction : ft_strlcat
**
** appends string src to the end of dst.  
** It will append at most dstsize - strlen(dst) - 1 characters.
** It will then NUL-terminate, unless dstsize is 0 or the original 
** dst string was longer than dstsize 
** (in practice this should not happen as it means that
** either dstsize is incorrect or that dst is not a proper string).
**
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

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
