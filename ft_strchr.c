/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:48:25 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/01 08:50:36 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *src, int c)
{
	int	i;

	i = 0;
	if (src[i] == '\0' || c > 127 || c < 0)
		return (0);
	while (src[i])
	{
		if (src[i] == c)
		{
			return (src[i]);
		}
		i++;
	}
	return (0);
}
