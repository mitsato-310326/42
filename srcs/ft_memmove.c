/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:33:05 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 11:02:24 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void *ft_memmove(char *dest, const char *src, size_t n)
{
	unsigned char *tmp;
	// int len = ft_strlen(src);
	size_t i = 0;
	tmp = malloc(n);
	while(n > i)
	{
		tmp[i] = src[i];
		++i;
	}
	i = 0;
	while(n > i)
	{
		dest[i] = tmp[i];
		++i;
	}
	free(tmp);
	return (dest);
}
