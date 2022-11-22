/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 08:53:31 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/16 13:49:32 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description of : ft_strtrim
**
** Allocates (with malloc(3)) and returns a copy of
** ’s1’ with the characters specified in ’set’ removed
** from the beginning and the end of the string.
**
*/

// use ft_strchr to find the last occurence of *set before the real word, //
// and use ft_strrchr to find te first occurence of *set in the end of //
// the real word. Finally use ft_substr to take the final word without //
// the character of *set in the beginning and the end of the real word //

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (set == NULL || s1 == NULL)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j && ft_strrchr(set, s1[j]))
		j--;
	j = (j - i) + 1;
	return (ft_substr(s1, i, j));
}
