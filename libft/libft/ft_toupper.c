/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:46:05 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/16 13:56:37 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description of : ft_toupper
**
** The toupper() function converts a lower-case 
** letter to the corresponding upper-case letter.
** The argument must be representable as an unsigned char or the
** value of EOF.
**
*/

// if my toupper find a lowercase letter, it turns it into uppercase //

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
