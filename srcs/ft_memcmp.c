/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:22:22 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/05 21:18:29 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i = 0;
	const unsigned char *p1;
	const unsigned char *p2;
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	if (n == 0)
		return(0);
	while(*p1 == *p2 && ++i < n)
	{
		++p1;
		++p2;
	}
	return(*p1 - *p2);
}
