/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:14:10 by shavok            #+#    #+#             */
/*   Updated: 2022/02/18 16:27:30 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (void *)0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
		{
			p = (void *)&str[i];
			return (p);
		}
		i++;
	}
	if (c == '\0')
		p = (void *)&str[i];
	return (p);
}
