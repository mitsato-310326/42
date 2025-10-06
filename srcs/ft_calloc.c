/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:55:19 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/04 10:51:44 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	char *dst;
	size_t i = 0;
	if ((SIZE_MAX / size < (unsigned long)nmemb) || ((long)nmemb < 0 && size != 0) || (nmemb != 0 && (long)size < 0))
		return(NULL);
	dst = malloc(nmemb * size);
	if(!dst){
		free(dst);
		return NULL;
	}
	while(i < nmemb * size && (nmemb != 0 && size != 0))
	{
		dst[i] = 0;
		++i;
	}
	return(dst);
}

// int main(void)
// {
// 	int *sprite = ft_calloc(2147483647, 2147483647);
// 	// while(sprite[i] == 0)
// 	// {
// 	// 	printf("%d\n", sprite[i]);
// 	// 	++i;
// 	// }
// 	return(0);
// }
