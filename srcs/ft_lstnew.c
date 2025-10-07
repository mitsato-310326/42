/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:51:00 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/06 19:26:20 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

// t_list *set_new(void *content, t_list *look_list)
// {
// 	look_list->content = content;
// 	look_list->next = NULL;
// 	return(look_list);
// }

// t_list *rec_new(void *content, t_list *look_list)
// {
// 	if(look_list->next == NULL)
// 		look_list->next =set_new(content, look_list->next);
// 	look_list->next = rec_new(content, look_list->next);
// }

t_list *ft_lstnew(void *content)
{
	t_list *new;
	new = malloc(sizeof(t_list));
	new->content = content;
	new->next = NULL;
	return(new);
}

// int main(void)
// {

// 	return 0;
// }
