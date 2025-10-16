/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 19:49:31 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 14:40:30 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	if (!*s && (unsigned char)c != 0)
		return (0);
	while (*s)
		++s;
	if ((unsigned char)c == 0)
		return ((char *)s);
	--s;
	while (*s && *s != (unsigned char)c)
		--s;
	if (!*s)
		return (0);
	return ((char *)s);
}
