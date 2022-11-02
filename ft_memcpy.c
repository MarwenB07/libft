/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 07:13:57 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/02 08:56:25 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <time.h>

/*
** Description de la fonction : ft_memcpy
**
** La fonction memcpy() copie n octets de la zone mémoire src 
** vers la zone mémoire dst. Si dst et src se chevauchent, 
** le comportement est indéfini. Applications dans lesquelles dst et
** src pourrait se chevaucher devrait utiliser memmove(3) à la place.
**
*/

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (n > i)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// main //

/*
int main()
{
	char s1[] = "coucou";
	char *s2;
	ft_memcpy(s2, s1, 7);
	printf("s1 = %s\n\n", &s1);
	printf("s2 = %s\n", &s2);

}
*/
