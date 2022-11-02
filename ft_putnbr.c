/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:13:25 by mbouaza           #+#    #+#             */
/*   Updated: 2022/10/31 21:21:29 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Description de la fonction : ft_putnbr()
**
** Doit pouvoir afficher tous les 
** nombres entre 2147483647 et -2147483648
**
*/

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
		if (n == -2147483648)
			ft_putstr("2147483648");
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}
