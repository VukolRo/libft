/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 10:25:45 by shavok            #+#    #+#             */
/*   Updated: 2021/10/11 13:21:55 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				dif;
	size_t			i;
	unsigned char	*ch1;
	unsigned char	*ch2;

	i = 1;
	ch1 = (unsigned char *)s1;
	ch2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	else
	{
		while (*ch1 != '\0' && *ch2 != '\0' && i != n)
		{
			if (*ch1 != *ch2)
				return (dif = *ch1 - *ch2);
			ch1++;
			ch2++;
			i++;
		}
		dif = *ch1 - *ch2;
		return (dif);
	}
}
