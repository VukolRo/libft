/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:14:12 by shavok            #+#    #+#             */
/*   Updated: 2022/02/16 21:09:01 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src) + 1;
	dup = (char *)malloc((len) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	else
	{
		while (i < ft_strlen(src))
		{
			dup[i] = src[i];
			i++;
		}
	}
	dup[i] = '\0';
	return (dup);
}
