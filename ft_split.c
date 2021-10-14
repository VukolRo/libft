/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:14:32 by shavok            #+#    #+#             */
/*   Updated: 2021/10/14 19:00:26 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count (char const *s, char c)

{
	int			count;
	int			i;
	const char	*buf;

	buf = s;
	i = 0;
	count = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == c && buf[i+ 1] != '\0' && buf[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)

{
	char	**ret;
	int		w_count;
	int		i;
	int		w_len;
	int		j;

	w_count = words_count(s, c);
	ret = (char **)0;
	ret = (char **)ft_calloc((w_count + 1), sizeof(char *));
	if (ret)
	{
		j = 0;
		i = 0;
		while (j < w_count)
		{
			while (s[i] == c)
				i++;
			w_len = 0;
			while (s[i + w_len] != c && s[i + w_len] != '\0')
				w_len++;			
			ret[j] = ft_substr(s, i, w_len); 
				if (ret[j] == NULL)
				{
					while ((--j) >= 0)
						free(ret[j]);
					return (NULL);
				}
			i += w_len;
			j++;
		}
	}
	return (ret);
}