/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:36:04 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/03 20:55:35 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_bzero(char *s, int n)
{
	int i = 0;
	while (n > i)
	{
		s[i] = '\0';
		++i;
	}
}

// int main(void)
// {
// 	char sprite[] = "Hi! my name is true!";
// 	char split[] = " !,";
// 	return(0);
// }
