/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:40:00 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/05 20:54:27 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_memchr(char *s, char c, size_t n)
{
	size_t i = 0;
		// c = c % 256;
	while(s[i] != c && i < n)
	{
		// ++s;
		++i;
	}
	if((!s[i] && c != 0) || n == i)
		return 0;
	return(s + i);
}
