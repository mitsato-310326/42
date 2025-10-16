/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:07:15 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 14:40:20 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = ft_strdup((char *)s);
	while (str[i])
	{
		str[i] = (f)(i, s[i]);
		++i;
	}
	return (str);
}

// int main(void)
// {
// 	printf("%s", ft_strmapi("feawfwega", setp));
// }
