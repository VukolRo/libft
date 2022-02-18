/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:55:57 by shavok            #+#    #+#             */
/*   Updated: 2022/02/18 16:27:32 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;
	int		len;

	if (s)
	{
		len = ft_strlen(s);
		i = 0;
		while (i < len)
		{
			f(i, &s[i]);
			i++;
		}
	}
}
