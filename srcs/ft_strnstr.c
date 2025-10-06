/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 21:19:44 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/06 10:58:13 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(char *s, char *c, size_t n)
{
	// c = c % 256;
	size_t i = 0;
	size_t j = 0;
	if (n == 0 && *c)
		return 0;
	if(*c == 0)
		return(s + ft_strlen(s));
	while(s[i] && i < n)
	{
		j = 0;
		while(c[j] && s[i + j] && s[i + j] == c[j] && i + j < n)
			++j;
		if(i + j == n || !c[j])
			break;
		++i;
	}
	if((!s[i] && c[j] != 0 )|| (i + j == n && c[j]))
		return 0;
	return(s + i);
}
// int main(void)
// {
// 	printf("%d\n",ft_strnstr("aaabcabcd", "abcd", 9));
// 	return 0;
// }
