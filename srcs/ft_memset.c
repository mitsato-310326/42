/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:06:17 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/05 14:29:33 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

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
