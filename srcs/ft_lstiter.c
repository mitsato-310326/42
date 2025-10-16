/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 23:21:40 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 14:22:50 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	rec_toiter(t_list *look_list, void (*f)(void *))
{
	if (look_list->next == NULL)
	{
		f(look_list->content);
	}
	else
	{
		rec_toiter(look_list->next, f);
		f(look_list->content);
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	rec_toiter(lst, f);
}
