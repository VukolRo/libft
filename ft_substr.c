/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:47:23 by shavok            #+#    #+#             */
/*   Updated: 2021/10/19 12:39:52 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*buf;
	int		m_len;

	if (!s)
		return (NULL);
	m_len = len;
	if (ft_strlen(s) - (int)start < (int)len
		&& ft_strlen(s) - (int)start >= 0)
		m_len = ft_strlen(s) - (int)start;
	if (ft_strlen(s) - (int)start < 0)
		m_len = 0;
	buf = (char *)ft_calloc((m_len + 1), sizeof(char));
	if (buf)
	{
		if (ft_strlen(s) >= (int)(start + m_len))
			ft_memcpy(buf, &s[start], m_len);
	}
	return (buf);
}
