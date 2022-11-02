/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:24:49 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/02 16:51:22 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

/*
** Description de la fonction : ft_bzero
**
** DESCRIPTION*
**
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*b;

	i = 0;
	b = (char *)s;
	while (i < n)
	{
		b[i] = 0;
		i++;
	}
}

// main //

/*
int main()
{
	char str[] = "Ceci est une string";
	printf("%s\n", str);
	ft_bzero(str + 1, 19);
	printf("%s", str);
}
*/
