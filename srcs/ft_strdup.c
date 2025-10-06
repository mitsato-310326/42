/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:10:33 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/02 09:40:24 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char* str)
{
	int i = 0;
	while(*str++)
		++i;
	return(i);
}

char *ft_strdup(char* str)
{
	int i = 0;
	int len = ft_strlen(str);
	char *dst;
	dst = malloc((len + 1) * sizeof(char));
	while(len > i)
	{
		dst[i] = str[i];
		++i;
	}
	dst[i] = '\0';
	return(dst);
}

// int main(void)
// {
// 	char sprite[] = "Hi! my name is true!";
// 	char split[] = " !,";
// 	return(0);
// }
