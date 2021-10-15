/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 12:24:42 by shavok            #+#    #+#             */
/*   Updated: 2021/10/15 16:36:04 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_rank(long long int m)

{
	int			count;

	count = 1;
	while (m >= 10)
	{
		count++;
		m /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)

{
	char			*ret;
	int				count;
	long long int	m;

	if (n < 0)
		m = (long long int)n * -1;
	else
		m = n;
	ret = NULL;
	count = count_rank(m);
	if (n < 0)
		count += 1;
	ret = (char *)ft_calloc((count + 1), sizeof(char));
	if (ret)
	{
		if (n < 0)
			ret[0] = '-';
		while (count - 1 >= 0 && ret[count - 1] != '-')
		{
			ret[count - 1] = m % 10 + 48;
			count--;
			m /= 10;
		}
	}
	return (ret);
}
