/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:10:50 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/01 10:13:22 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Description de la fonction : ft_strdel()
**
** Prend en parametre l'adresse d'une chaine de caractËres qui
** doit Ítre liberee avec free(3) et son pointeur mis a NULL.
**
*/

void	ft_strdel(char **as)
{
	if (as)
	{
		if (as != NULL)
		{
			free(*as);
			*as = NULL;
		}
	}
}
