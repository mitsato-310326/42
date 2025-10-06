/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:40:08 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/06 14:04:24 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strtrim(char *s1, const char *set)
{
	// char *p1 = (char *)s1;
	char *pset = (char *)set;
	int len_str = ft_strlen(s1);
	int len_set = ft_strlen(pset);
	int i = 0;
	int j = 0;
	while(ft_strnstr(s1 + i, pset, len_str) != 0 && i + j < len_str)
	{
		char *wilcat = ft_strnstr(s1, pset, len_str);
		while(s1 + i != wilcat)
		{
			printf("%s\n", s1 + i);
			++i;
		}
		wilcat += len_set;
		j = 0;
		while((j < len_str - len_set) && (i + j < len_str))
		{
			s1[i + j] = wilcat[j];
			++j;
		}
		i += j;
		// ft_strlcpy(p1, wilcat + len_set, ft_strlen(p1) - len_set);
	}
	return(s1);
}

int main(void)
{
	char * s = ft_strtrim("   xxxtripouille", " x");
	printf("%s", s);
	return(0);
}
