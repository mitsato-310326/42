/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 19:49:31 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 14:39:58 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char)c)
		++s;
	if (!*s && (unsigned char)c != 0)
		return (0);
	return ((char *)s);
}
