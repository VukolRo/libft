/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:08:00 by shavok            #+#    #+#             */
/*   Updated: 2021/10/10 19:46:20 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size)

{
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (size <= d_len)
		return (size + s_len);
	while (*dst && size > 0)
	{
		dst++;
		size--;
	}
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (s_len + d_len);
}
