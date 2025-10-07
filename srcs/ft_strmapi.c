/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:07:15 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/07 17:03:55 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// char setp(unsigned int t, char c)
// {
// 	t = 0;
// 	c = '\0';
// 	return('p');
// }

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int i = 0;
	char *str = ft_strdup((char *)s);
	while(str[i])
	{
		str[i] = (f)(i, s[i]);
		++i;
	}
	return(str);
}

// int main(void)
// {
// 	printf("%s", ft_strmapi("feawfwega", setp));
// }
