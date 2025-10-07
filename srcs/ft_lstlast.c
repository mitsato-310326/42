/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 21:58:17 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/06 22:01:24 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

t_list *search_last(t_list *look_list)
{
	if(look_list->next == NULL)
		return(look_list);
	return(search_last(look_list->next));
}

t_list *ft_lstlast(t_list *lst)
{
	if(!lst)
		return 0;
	return(search_last(lst));
}
