// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_strlcpy.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/10/05 14:52:21 by mitsato           #+#    #+#             */
// /*   Updated: 2025/10/05 16:12:54 by mitsato          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t i = 0;
	long long lsize = dsize;
	if (lsize < 0)
		dsize = (lsize + ULONG_MAX);
	size_t src_len = ft_strlen((char *)src);

	if (dsize == 0)
		return(src_len);
	while(src[i] && i < dsize - 1)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
	return (src_len);
}
