/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 22:37:34 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/07 12:41:50 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void rec_tofree(t_list *look_list, void (*del)(void *))
{
	printf("\nIN!!\n");
	if(look_list->next == NULL)
	{
		if(look_list->content != NULL)
			del(look_list->content);
		free(look_list);
	}
	else
	{
		rec_tofree(look_list->next, del);
		if(look_list->content != NULL)
			del(look_list->content);
		free(look_list);
	}
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	if(!lst)
		return;
	if(!(*lst)->next)
	{
		del((*lst)->content);
		free(*lst);
		return ;
	}
	rec_tofree(*lst, del);
	(*lst) = NULL;
}
#include "libft.h"

// void	ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list	*node;

// 	if (!lst)
// 		return ;
// 	while (*lst)
// 	{
// 		node = (*lst)->next;
// 		ft_lstdelone(*lst, del);
// 		*lst = node;
// 	}
// }
