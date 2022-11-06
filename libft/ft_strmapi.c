/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:47:09 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/06 12:46:23 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description of : ft_strmapi
**
** DESCRIPTION*
**
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	str = ft_strdup(s);
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f((unsigned int)i, str[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
