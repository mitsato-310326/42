/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:10:33 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/03 20:28:12 by mitsato          ###   ########.fr       */
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

char *ft_strjoin(char* left, char* right)
{
	int i = 0;
	int left_len = ft_strlen(left);
	int right_len = ft_strlen(right);
	char *dst;
	dst = malloc((left_len + right_len + 1) * sizeof(char));
	while(i < left_len)
	{
		dst[i] = left[i];
		++i;
	}
	while(i < left_len + right_len)
	{
		dst[i] = right[i - left_len];
		++i;
	}
	dst[i] = '\0';
	return(dst);
}

// int main(void)
// {
// 	return(0);
// }
