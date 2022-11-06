/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:41:46 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/06 18:53:29 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description of : ft_striteri
**
** DESCRIPTION*
**
*/

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t i;

	i = 0;

	if (s)
	{
		while (s[i])
		{
			f((unsigned int)i, s + i);
			i++;
		}
	}
}
