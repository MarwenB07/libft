/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:27:35 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/04 09:29:36 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description de la fonction : ft_strncmp
**
** ft_strcmp mais a une taille designer 'n'
**
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((s1[i] || s2[i]) && n > i)
	{
		if (ft_isascii(s1[i]) == 0 || ft_isascii(s2[i]) == 0)
			i++;
		if (s1[i] > s2[i] || !s2[i])
			return (1);
		if (s1[i] < s2[i] || !s1[i])
			return (-1);
		i++;
	}
	return (0);
}
