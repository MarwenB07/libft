/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:44:31 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/16 13:53:53 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description of : ft_tolower
**
** The tolower() function converts an upper-case letter to 
** the corresponding lower-case letter.
** The argument must be representable as an unsigned char or the
** value of EOF.
**
*/

// if my tolower find a uppercase letter, it turns it into lowercase //

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
