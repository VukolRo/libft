/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:01:09 by shavok            #+#    #+#             */
/*   Updated: 2021/10/15 19:16:28 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)

{
	if (fd > 0)
	{
		if (n < 0 && n > -2147483648)
		{
			write (fd, "-", 1);
			ft_putnbr_fd(-n, fd);
		}
		else if (n == -2147483648)
		{
			write (fd, "-", 1);
			n = 214748364;
			ft_putnbr_fd(n, fd);
			ft_putnbr_fd(8, fd);
		}
		else if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			n = n % 10 + '0';
			write (fd, &n, 1);
		}
	}
}
