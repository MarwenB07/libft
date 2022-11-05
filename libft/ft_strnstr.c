/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:10:00 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/04 11:02:19 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
** Description of : ft_strnstr
**
** ft_strstr but with n
**
** split == poo
**
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0' || len <= 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while ((haystack[i + j] == needle[j] && haystack[i]) && (i + j) < len)
		{
			j++;
			if (j == ft_strlen(needle))
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}

/*
int main()
{
	const char n[] = "Bonjour a toi marwen !";
	const char two[] = "a toi";
	printf("%s", ft_strnstr(two, n, 2));
}
*/
