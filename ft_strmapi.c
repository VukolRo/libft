/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 16:37:53 by shavok            #+#    #+#             */
/*   Updated: 2021/10/15 16:55:00 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	char	*str;
	int		i;
	int		len;

	str = NULL;
	if (s)
	{
		len = ft_strlen(s);
		str = (char *)ft_calloc((len + 1), sizeof(char));
		if (str)
		{
			i = 0;
			while (i < len)
			{
				str[i] = f(i, s[i]);
				i++;
			}
		}
	}
	return (str);
}
