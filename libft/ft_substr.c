/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:40:58 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/06 16:57:57 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

/*
** Description of : ft_substr
**
** Alloue (avec malloc(3)) et retourne une chaîne de
** caractères issue de la chaîne ’s’.
** Cette nouvelle chaîne commence à l’index ’start’ et
** a pour taille maximale ’len’.
**
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *str;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

/*
int main()
{
	char *str = "i just want this part ############";

	printf("%s\n", ft_substr(str, 5, 20));
}
*/
