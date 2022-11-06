/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 07:24:06 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/06 14:18:46 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/*
** Description of : ft_strlcpy
**
** strlcpy() copies up to dstsize - 1 
** characters from the string src to dst,
** NUL-terminating the result if dstsize is not 0.
**
** 'The One piece is real !!!' : Edward Newgate.
**
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < (dstsize - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// main //

/*
int main()
{
	char dst[15] = "et oui";
	const char src[] = "j";
	size_t i = 6;
	size_t a = 0;

	a = ft_strlcpy(dst, src, i);
	printf("%s et %d", dst, a);
}
*/
