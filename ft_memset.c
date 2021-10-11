/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:57:09 by shavok            #+#    #+#             */
/*   Updated: 2021/10/10 12:07:06 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)

{
	char	*temp;
	size_t	i;

	temp = str;
	i = 0;
	while (i < len)
	{
		*temp = (unsigned char)c;
		temp++;
		i++;
	}
	return (str);
}
