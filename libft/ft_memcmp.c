/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:26:42 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/04 09:35:21 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h>
#include "libft.h"

/*
** Description de la fonction : ft_memcmp
**
** La fonction memcmp() compare la chaîne d'octets s1 à la chaîne d'octets s2.
** Les deux chaînes sont supposées avoir une longueur de n octets.
**
*/

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *tm1;
	char *tm2;

	tm1 = (char *)s1;
	tm2 = (char *)s2;
	i = 0;
	while ((tm1[i] || tm2[i]) && i < n)
    {
        if (!ft_isascii(tm1[i]) || !ft_isascii(tm2[i]))
            i++;
        if ((tm1[i] > tm2[i]) || !tm2[i])
            return (1);
        if ((tm1[i] < tm2[i]) || !tm1[i])
            return (-1);
        i++;
    }
	return (0);
}

// main //

/*
int main()
{
	int i;

	unsigned char s1[6] = "coucou";
	unsigned char s2[6] = "coucou";
	i = ft_memcmp(s1, s2, 6);
	printf("%d", i);
}
*/
