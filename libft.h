/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:51:54 by shavok            #+#    #+#             */
/*   Updated: 2021/10/10 19:49:12 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef unsigned long size_t;

int	ft_isalnum(int a);
int	ft_isalpha(int a);
int	ft_isascii(int a);
int	ft_isdigit(int a);
int	ft_isprint(int a);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int	ft_strlen(const char *str);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memset(void *str, int c, size_t len);
void	*ft_memchr(const void *str, int c, size_t n);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t ft_strlcpy (char *dst, const char *src, size_t size);
size_t ft_strlcat (char *dst, const char *src, size_t size);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

#endif