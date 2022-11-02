/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabascii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:51:37 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/01 09:40:41 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A optimiser //

// Juste pour pas faire chier avec la table Ascii //

void	ft_tabascii(char *str)
{
	int		i;
	int		ascii_num;
	char	*ascii_nbr;

	ascii_num = 0;
	i = 0;
	while (str[i])
	{
		ft_putstr("\n");
		ft_putstr(" '");
		ft_putchar(str[i]);
		ft_putstr("'");
		ft_putstr(" = ");
		ascii_num = str[i];
		ft_putstr("'");
		ascii_nbr = ft_itoa(ascii_num);
		ft_putstr(ascii_nbr);
		ft_putstr("'\n");
		i++;
	}
}
