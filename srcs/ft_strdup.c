/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:10:33 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 11:53:41 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*dst;

	i = 0;
	len = ft_strlen(s);
	dst = malloc((len + 1) * sizeof(char));
	while (len > i)
	{
		dst[i] = s[i];
		++i;
	}
	dst[i] = '\0';
	return (dst);
}

// int main(void)
// {
// 	char sprite[] = "Hi! my name is true!";
// 	char split[] = " !,";
// 	return(0);
// }
