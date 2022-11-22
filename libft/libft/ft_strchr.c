/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:48:25 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/16 13:42:09 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Description of : ft_strchr
**
**The strchr() function locates the first occurrence of c 
** (converted to a char) in the string pointed to by s.
** The terminating null character is considered to be part 
** of the string; therefore if c is `\0', 
** the functions locate the te:wqrminating `\0'.
*/

// try to find the first occurence of c and return the rest //

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c > 256)
	{
		c = c - 256;
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
