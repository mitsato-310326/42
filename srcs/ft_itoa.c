/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 17:29:35 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 10:58:42 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *swap_ascii(char *str, int size_plus_one)
{
	while(size_plus_one > 0)
	{
		str[size_plus_one] = str[size_plus_one - 1];
		--size_plus_one;
	}
	return(str);
}

char *set_ascii(int nbr, int count, int *size){
	char *ascii;
	if(-nbr < 10)
	{
		ascii = malloc((count + 2)*sizeof(char));
		*size  = count;
		ascii[*size - count] = '0' - nbr;
		ascii[count + 1] = '\0';
		return(ascii);
	}
	else
	{
		ascii = set_ascii(nbr / 10, count + 1, size);
		ascii[*size - count] = '0' - (nbr % 10);
		return(ascii);
	}
}

char *ft_itoa(int nbr)
{
	int a;
	char *ascii;
	if (nbr >= 0)
	{
		nbr = -nbr;
		ascii = set_ascii(nbr, 0, &a);
	}
	else
	{
		ascii = set_ascii(nbr, 1, &a);
		ascii = swap_ascii(ascii, a);
		ascii[0] = '-';
	}
	return (ascii);
}

#include <stdio.h>

// int	main(void)
// {
// 	// printf("%d\n", ft_itoa("9223372036854775809"));
// 	printf("%s\n", ft_itoa(-12345));
// 	// char str[256];

// 	// sprintf(str, "%d", 12345);
// 	// printf("%d\n", ft_itoa("9223372036854775808"));
// 	// printf("%d\n", itoa("9223372036854775808"));
// 	// printf("%d\n", ft_itoa("9223372036854775807"));
// 	// printf("%d\n", itoa("9223372036854775807"));
// 	// printf("%d\n", ft_itoa("9223372036854775806"));
// 	// printf("%d\n", itoa("9223372036854775806"));
// 	return (0);
// }
