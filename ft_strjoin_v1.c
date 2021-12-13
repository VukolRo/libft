/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:45:42 by shavok            #+#    #+#             */
/*   Updated: 2021/10/19 12:42:19 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)

{
	char	*buf;
	int		len_1;
	int		len_2;

	if (!s1 || !s2)
		return (NULL);
	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	buf = (char *)ft_calloc((len_1 + len_2 + 1), sizeof(char));
	if (buf)
	{
		ft_strlcat(&buf[0], s1, (len_1 + 1));
		ft_strlcat(&buf[len_1], s2, (len_2 + 1));
	}
	return (buf);
}
