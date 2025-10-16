/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:33:05 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 14:41:31 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(n);
	while (n > i)
	{
		tmp[i] = ((char *)src)[i];
		++i;
	}
	i = 0;
	while (n > i)
	{
		((char *)dest)[i] = tmp[i];
		++i;
	}
	free(tmp);
	return (dest);
}
