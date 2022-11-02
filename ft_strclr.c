/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:16:55 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/01 10:19:10 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description de la fonction : ft_strclr()
**
** Vas remplacer une chaine de caractËre par '\0'
** c'est ‡ dire qu'elle vas clear la chaine.
**
*/

void	ft_strclr(char *s)
{
	if (s)
		while (*s)
			*s++ = '\0';
}
