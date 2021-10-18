/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:28:12 by shavok            #+#    #+#             */
/*   Updated: 2021/10/18 13:15:15 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	char	*found;
	size_t	n_len;

	found = (char *)0;
	n_len = ft_strlen(needle);
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	if (len != 0)
	{
		while (*haystack && len >= n_len)
		{
			if (*haystack == *needle
				&& ft_strncmp(haystack, needle, n_len) == 0)
				found = (char *)haystack;
			haystack++;
			len--;
			if (found)
				break ;
		}
	}
	return (found);
}
