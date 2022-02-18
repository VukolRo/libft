/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:14:32 by shavok            #+#    #+#             */
/*   Updated: 2022/02/18 16:27:28 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (s[0] != c && s[0] != '\0')
		count = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

static char	**arr_allocate(char **ret, char const *s, int w_count, char c)
{
	int	w_len;
	int	j;
	int	i;

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
			free(ret);
			return (NULL);
		}
		i += w_len;
		j++;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		w_count;

	ret = NULL;
	if (s)
	{
		w_count = words_count(s, c);
		ret = (char **)ft_calloc((w_count + 1), sizeof(char *));
		if (ret)
		{
			ret = arr_allocate(ret, s, w_count, c);
		}
	}
	return (ret);
}
