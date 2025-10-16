/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:06:17 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 11:02:31 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void *ft_memset(char *s, int c, size_t n)
{
	size_t i = 0;
	if (SIZE_MAX < n)
		return(NULL);
	while(i < n && n != 0)
	{
		s[i] = c;
		++i;
	}
	return(s);
}

// int main(void)
// {
// 	return 0;
// }
