/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:14:41 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/16 12:54:26 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Description of : ft_putchar_fd
**
** ft_putchar but use file descriptor
**
*/

// print a char ... //

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
