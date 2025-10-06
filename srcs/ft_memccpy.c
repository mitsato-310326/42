/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:03:17 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/05 12:47:26 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

//やらなくていいそうだから放置

void *ft_memccpy(char *dest, char *src, int c, size_t n)
{
	size_t i = 0;
	// dest = malloc(n);
	// if(!dest)
	// 	return NULL;
	while(i < n && src[i] != c)
	{
		dest[i] = src[i];
		++i;
	}

	if (src[i] == c)
	{
		++i;
		dest[i] = c;
		dest += i;
		return(dest);
	}

	return(dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAA";
// 	ft_memccpy(dest, "coucou", 0, 1);
// 	printf("%c\n", dest[0]);
// 	printf("%c\n", dest[1]);
// 	return 0;
// }
