/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 17:18:54 by shavok            #+#    #+#             */
/*   Updated: 2022/02/18 16:27:16 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (fd > 0)
	{
		i = 0;
		if (s)
		{
			while (s[i] != '\0' )
			{
				write(fd, &s[i], 1);
				i++;
			}
		}
	}
}
