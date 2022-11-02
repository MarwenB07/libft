/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:15:56 by mbouaza           #+#    #+#             */
/*   Updated: 2022/11/02 10:56:11 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Les Librairies //

# include "libft.h"
# include <stddef.h>
# include <stdint.h>

// Structure //

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// void //

void	ft_bzero(void *s, size_t n);
void	ft_strdel(char **as);
void	ft_tabascii(char *str);
void	ft_strclr(char *s);
void	ft_putnbr(int n);
void	ft_putendl(char *s);
void	ft_putchar(char c);
void	ft_putstr(const char *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

// size_t //

size_t	ft_strlen(char *s);
size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize);

// int //

int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_atoi(const char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);


// char //

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strrchr(const char *s, int c);
char	*strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strnew(size_t size);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(const char *src, int c);
char	*ft_strcpy(char *dest, char *src);
char	*ft_itoa(int nbr);

#endif
