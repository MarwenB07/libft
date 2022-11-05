/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:01:20 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/05 12:41:07 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
** Description of : ft_memmove
**
** The memmove() function copies len bytes from string src to string dst.
** The two strings may overlap;
** the copy is always done in a non-destructive manner.
**
** Ouhooo !!!
**
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if ((unsigned char *)dst == NULL || (const unsigned char *)src == NULL)
		return (NULL); 
	if ((unsigned char *)dst > (const unsigned char *)src)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len > i)
		{
			((unsigned char *)dst)[len] = ((const unsigned char *)src)[len];
			len--;
		}
	}
	return (dst);
}

// main //

/*
int main()
{
	int s1[10] = {1, 2, 3, 4, 5, 6, 55, 8, 9, 10};
	int s2[10];
	int i;

	i = 0;
	ft_memmove(s2, s1, 10);
	while (i <= 9)
	{
	printf("s1[%d] = %d		s2[%d] = %d\n", i, s1[i], i, s2[i]);
	i++;
	}
	return (0);
}
*/
