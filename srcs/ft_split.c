/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:10:33 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 11:03:25 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strsizedup(char* str, int size)
{
	int i = 0;
	char *dst;
	dst = malloc((size + 1) * sizeof(char));
	while(size > i)
	{
		dst[i] = str[i];
		++i;
	}
	dst[i] = '\0';
	return(dst);
}

int size_split(char *str, char split)
{
	int t = 0;
	int count = 0;
	while (*str && *str == split)
		++str;
	int len = ft_strlen(str);
	while (t < len)
	{
		while(!(str[t] == '\0' || str[t] == split) && t < len)
			++t;
		++count;
		while(t < len && (str[t] == split))
			++t;
	}
	return(count);
}
void ft_freeall(char **mono, int size)
{
	while(--size >= 0)
		free(mono[size]);
	free(mono);
}

char **ft_split(char *str, char split)
{
	char **mono;
	int i;
	int n;
	n = 0;
	mono = malloc((size_split(str, split) + 1) * sizeof(char *));
	while ((*str == split) && *str)
		++str;
	int len = ft_strlen(str);
	i = len;
	while (*str)
	{
		while(!(str[len - i] == '\0' || str[len - i] == split) && i > 0)
			--i;
		mono[n]	= ft_strsizedup(str, len - i);
		if (!mono[n])
		{
			ft_freeall(mono ,n);
			return(NULL);
		}
		str += len - i;
		len = i;
		while((*str == split) && *str)
			++str;
		++n;
	}
	mono[n] = NULL;
	return(mono);
}
// int main(void)
// {
// 	// char sprite[] = "--1-2--3---4----5-----42";
// 	char *splitme = strdup("--1-2--3---4----5-----42");

// 	char **slice = ft_split(splitme, '-');
// 	int i = 0;
// 	void * p2 = malloc(strlen("42") + 1);
// 	if (malloc_usable_size(slice[5]) == malloc_usable_size(p2))
// 		printf("aewav\n");
// 	while(5 > i)
// 	{
// 		printf("%s\n", slice[i]);
// 		++i;
// 	}
// 	printf("%s\n", slice[i]);
// 	return(0);
// }
