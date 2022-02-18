/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 11:31:44 by shavok            #+#    #+#             */
/*   Updated: 2022/02/18 16:26:55 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*e1;

	e1 = (t_list *)malloc(sizeof(t_list));
	if (e1)
	{
		e1->content = content;
		e1->next = (t_list *)0;
	}
	return (e1);
}
