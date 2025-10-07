/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 22:02:09 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/06 22:17:28 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

t_list *search_back(t_list *look_list)
{
	if(look_list->next == NULL)
		return(look_list);
	return(search_back(look_list->next));
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if(!*lst)
	{
		*lst = new;
		return ;
	}
	search_back(*lst)->next = new;
}
