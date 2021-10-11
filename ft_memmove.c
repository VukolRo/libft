/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:06:36 by shavok            #+#    #+#             */
/*   Updated: 2021/10/10 12:07:19 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*d_last;
	const unsigned char	*s;
	const unsigned char	*s_last;

	d = dest;
	s = src;
	if (dest || src)
	{
		if (d < s)
			while (n--)
				*d++ = *s++;
		else
		{
			s_last = s + (n - 1);
			d_last = d + (n - 1);
			while (n--)
				*d_last-- = *s_last--;
		}
	}
	return (dest);
}
