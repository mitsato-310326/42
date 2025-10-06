/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:03:17 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/05 12:17:51 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void *ft_memcpy(char *dest, const char *src, size_t n)
{
	size_t i = 0;
	// dest = malloc(n);
	// if(!dest)
	// 	return NULL;
	while(i < n)
	{
		dest[i] = src[i];
		++i;
	}
	return(dest);
}

// int main(void)
// {
// 	return 0;
// }
