/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:07:58 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/06 11:55:16 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*
** Description of : ft_itoa
**
** ft_atoi but with int to char
**
** read Berserk ! 
**
*/

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int	ft_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

static char	*ft_return_str_0_(char *str)
{
	str[0] = 48;
	return (str);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	long	n;
	int		i;

	n = nbr;
	i = ft_len(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (nbr == 0)
		ft_return_str_0_(str);
	if (nbr < 0)
	{
		n = n * -1;
		str[0] = '-';
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}

/*
int main()
{
	int a;
	a = 8256;
	printf("%s", ft_itoa(a));
}
*/
