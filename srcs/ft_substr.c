/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:20:16 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 14:40:38 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_subcharset(char const *str, size_t size)
{
	size_t	i;
	char	*dst;

	i = 0;
	if (size > ft_strlen((char *)str))
		size = ft_strlen((char *)str);
	dst = malloc((size + 1) * sizeof(char));
	while (size > i)
	{
		dst[i] = str[i];
		++i;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*empty;

	if ((unsigned int)ft_strlen((char *)s) < start)
	{
		empty = malloc(1);
		empty[0] = '\0';
		return (empty);
	}
	return (ft_subcharset(s + start, len));
}
