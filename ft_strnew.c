/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 09:19:27 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/01 09:24:12 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Description de la fonction : ft_strnew
**
** Cree une chaine de caractere alloue
** a la taille 'size' remplie de '/0'.
**
*/

char	*ft_strnew(size_t size)
{
	char	*newstr;

	if (!(newstr == (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	newstr[size] = '\0';
	while (size > 0)
	{
		newstr[size--] = '\0';
	}
	return (newstr);
}
