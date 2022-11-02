/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:53:31 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/02 10:52:00 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <time.h>

/*
** Description de la fonction : ft_strlcat
**
** strlcat() ajoute la chaîne src à la fin de dst.
** Il ajoutera au plus dstsize - strlen(dst) -
** 1 caractères. Il se terminera alors par NUL,
** à moins que dstsize ne soit 0 ou que la chaîne dst d'origine ait été
** plus long que dstsize (en pratique, cela ne devrait 
** pas se produire car cela signifie que soit dstsize est
** incorrect ou que dst n'est pas une chaîne correcte).
**
*/

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
}
