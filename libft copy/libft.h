/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:15:56 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/03 07:14:11 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Les Librairies //

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

// Structure //

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Fonction 26 / 33 //

// void //

void	ft_bzero(void *s, size_t n);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void 	*calloc(size_t count, size_t size);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

// size_t //

size_t	ft_strlen(char *s);
size_t	strlcat(char *dst, const char *src, size_t dsts);

// int //

int		ft_memcmp(const void *o1, const void *s2, size_t n);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_atoi(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);


// char //

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *src, int c);
char	*ft_itoa(int nbr);

#endif
