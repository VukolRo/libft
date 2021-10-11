/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:25:45 by shavok            #+#    #+#             */
/*   Updated: 2021/10/10 20:05:09 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		dif;
	size_t	i;

	i = 1;
	if (n == 0)
		return (0);
	else
	{
		while (*s1 != '\0' && *s2 != '\0' && i != n)
		{
			if (*s1 != *s2)
			{
				dif = *s1 - *s2;
				return (dif);
			}
			s1++;
			s2++;
			i++;
		}
		dif = *s1 - *s2;
		return (dif);
	}
}
