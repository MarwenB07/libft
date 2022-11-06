/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:24:58 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/06 13:16:53 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
** Description of : ft_putendl_fd
**
** ft_putstr_fd but with \n in the end.
**
*/

void	ft_putendl_fd(char const *s, int fd)
{
	int		i;
	char	n;

	i = 0;
	n = '\n';
	if (s != NULL)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
		ft_putchar_fd(n, fd);
	}
}

/*
int main()
{
	ft_putendl_fd("bonjour", 0);
}
*/
