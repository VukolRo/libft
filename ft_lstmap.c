/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shavok <shavok@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 13:47:16 by shavok            #+#    #+#             */
/*   Updated: 2022/02/18 16:26:49 by shavok           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*new_el;

	ret = (t_list *)0;
	while (lst)
	{
		new_el = ft_lstnew((*f)(lst->content));
		if (!new_el)
		{
			ft_lstclear(&ret, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&ret, new_el);
	}
	return (ret);
}
