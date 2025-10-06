/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 17:27:19 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/05 19:02:57 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>

int ft_strlen(const char* str)
{
	int i = 0;
	while(str[i])
		++i;
	return(i);
}
size_t ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t i = 0;
	long long lsize = dsize;
	if (lsize < 0)
		dsize = (lsize + ULONG_MAX);
	size_t dst_len = ft_strlen(dst);
	size_t src_len = ft_strlen(src);
	if (dsize == 0)
		return(src_len);
	if (dsize == 1 && *dst != '\0')
		return(src_len + 1);
	while(dst_len > i && i < dsize)
	{
		++i;
	}
	while((src_len > (i - dst_len)) && i < dsize - 1)
	{
		dst[i] = src[i - dst_len];
		++i;
	}
	if (dsize > dst_len)
		dst[i] = '\0';
	if (dsize < dst_len)
		return(src_len + dsize);
	return (src_len + dst_len);
}
