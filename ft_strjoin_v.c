/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:46:41 by shavok            #+#    #+#             */
/*   Updated: 2021/10/26 16:49:56 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*buf;
	int		len_1;
	int		len_2;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	buf = (char *)ft_calloc((len_1 + len_2 + 1), sizeof(char));
	if (buf)
	{
		i = -1;
		while (s1[++i])
			buf[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			buf[len_1] = s2[i];
			len_1++;
		}
	}
	return (buf);
}