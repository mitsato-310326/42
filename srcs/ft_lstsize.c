/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:49:33 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 14:23:02 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	rec_new(t_list *look_list, int count)
{
	if (look_list->next == NULL)
		return (count);
	return (rec_new(look_list->next, count + 1));
}

int	ft_lstsize(t_list *lst)
{
	if (!lst)
		return (0);
	return (rec_new(lst, 1));
}

// int main(void)
// {

// 	return (0);
// }
