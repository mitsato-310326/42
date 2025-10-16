/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:55:19 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 14:21:57 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*dst;
	size_t	i;

	i = 0;
	if ((size != 0 && SIZE_MAX / size < (unsigned long)nmemb) || (size != 0
			&& (long)nmemb < 0) || (nmemb != 0 && (long)size < 0))
		return (NULL);
	dst = malloc(nmemb * size);
	if (!dst)
		return (NULL);
	while (i < nmemb * size && (nmemb != 0 && size != 0))
	{
		dst[i] = 0;
		++i;
	}
	return (dst);
}

// int	main(void)
// {
// 	int	*sprite;

// 	sprite = ft_calloc(0, 0);
// 	// while(sprite[i] == 0)
// 	// {
// 	// 	printf("%d\n", sprite[i]);
// 	// 	++i;
// 	// }
// 	return (0);
// }
