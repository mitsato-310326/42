/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 23:29:55 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/07 13:52:59 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list *ft_lstcpy(t_list *dst, t_list *src, void *(*f)(void *), void (*del)(void *), int flag)
{
	t_list *tmp;
	if(src->next == NULL)
	{
		if (flag)
			dst = malloc(sizeof(t_list));
		(dst) = ft_lstnew(f(src->content));
		if(!dst)
		{
			ft_lstclear(&dst, del);
			return(NULL);
		}
		// ft_lstadd_back(&dst, f(src->content));
		return(dst);
	}
	else
	{
		if (flag)
		{
			dst = malloc(sizeof(t_list));
		}
		else
		flag = 1;
		(dst) = ft_lstnew(f(src->content));
		if(!dst)
		{
			ft_lstclear(&dst, del);
			return(NULL);
		}
		// ft_lstadd_back(&dst, f(src->content));
		(dst)->next = ft_lstcpy((dst)->next, src->next, f, del, 1);
		// printf("\n<< look pos = %p, %p, %d, %d >>\n", ft_lstlast(dst), ft_lstlast(dst)->content, ft_lstsize(src), ft_lstsize(dst));
		return(dst);
	}
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list *dst;
	if(!lst)
	{
		dst = NULL;
		return(dst);
	}
	dst = malloc(sizeof(t_list));
	// ft_lstiter(lst, f);
	dst = ft_lstnew(f(lst->content));
	if(!dst)
	{
		ft_lstclear(&dst, del);
		return(NULL);
	}
		// tmp = ft_lstnew(f(lst->content));
	// printf("\n<< look pos = %p, %p, %d, %d >>\n", ft_lstlast(dst), ft_lstlast(dst)->content, ft_lstsize(lst), ft_lstsize(dst));
	dst->next = ft_lstcpy(&dst, lst->next, f, del, 0);
	// printf("\n<< dst pos = %p, %p, %d, %d >>\n", ft_lstlast(dst), ft_lstlast(dst)->content, ft_lstsize(lst), ft_lstsize(dst));
	// printf("\n<< all pos = %p, %p, %d, %d >>\n", ft_lstlast(tmp), ft_lstlast(tmp)->content, ft_lstsize(lst), ft_lstsize(tmp));
	// void *a =NULL;
	// del(a);
	if(ft_lstsize(dst) != ft_lstsize(lst))
		return(NULL);
	return(dst);
}
// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*new;
// 	t_list	*node;

// 	if (!lst || !f)
// 		return (NULL);
// 	new = NULL;
// 	while (lst)
// 	{
// 		node = ft_lstnew(f(lst->content));
// 		if (!node)
// 		{
// 			ft_lstclear(&node, del);
// 			return (NULL);
// 		}
// 		ft_lstadd_back(&new, node);
// 		lst = lst->next;
// 	}
// 	return (new);
// }
