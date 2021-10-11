/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 16:00:08 by shavok            #+#    #+#             */
/*   Updated: 2021/10/10 12:07:27 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp;
	const char		*src_temp;

	temp = dest;
	src_temp = src;
	if (dest || src)
		while (n--)
			*temp++ = *src_temp++;
	return (dest);
}
