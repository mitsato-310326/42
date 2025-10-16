/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 20:40:00 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 14:23:09 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] != (unsigned char)c && i < n)
	{
		++i;
	}
	if ((!((char *)s)[i] && (unsigned char)c != 0) || n == i)
		return (0);
	return ((void *)s + i);
}
