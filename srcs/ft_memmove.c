/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:33:05 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/05 14:50:29 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int ft_strlen(const unsigned char* str)
{
	int i = 0;
	while(*str++)
		++i;
	return(i);
}

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
