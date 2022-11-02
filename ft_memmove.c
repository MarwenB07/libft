/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:01:20 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/02 08:55:58 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*
** Description de la fonction : ft_memmove
**
** La fonction memmove() copie len octets de la chaîne src vers la chaîne dst.
** Les deux chaînes peuvent se chevaucher ;
** la copie se fait toujours de manière non destructive la zone mémoire dst.
** Si dst et src se chevauchent, le comportement est indéfini.
** Applications dans lesquelles dst et src pourrait se chevaucher 
** devrait utiliser memmove(3) à la place.
**
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (len > i)
	{
		((int *)dst)[i] = ((int *)src)[i];
		i++;
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
