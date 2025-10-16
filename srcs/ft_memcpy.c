/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:03:17 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 14:23:20 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest2;
	const char	*src2 = (const char *)src;

	i = 0;
	dest2 = (char *)dest;
	while (i < n)
	{
		dest2[i] = src2[i];
		++i;
	}
	return (dest);
}

// int main(void)
// {
// 	return (0);
// }
