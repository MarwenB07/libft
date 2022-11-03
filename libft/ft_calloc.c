/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:58:03 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/02 14:32:50 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description de la fonction : ft_calloc
**
** malloc mais en + safe.
**
*/

// char = 1 //
// int = 4 //

void *calloc(size_t count, size_t size)
{
	char *str;
	size_t i;

	i = 0;
	str = malloc((1 + count) * size);
	if(!(str == malloc((1 + count) * size)))
	while ((1 - count) > i)
	{
		str[i] = 0;
		i++;
	}
}
