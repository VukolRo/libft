/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:57:28 by shavok            #+#    #+#             */
/*   Updated: 2022/02/18 16:27:56 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (void *)0;
	while (str[i] != 0)
	{
		if (str[i] == (unsigned char)c)
		{
			p = (char *)&str[i];
		}
		i++;
	}
	if (c == '\0')
	{
		p = (char *)&str[i];
	}
	return (p);
}
