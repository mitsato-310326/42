/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 17:29:55 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/06 17:45:49 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i = 0;
	while(s[i])
	{
		(f)(i, &s[i]);
		++i;
	}
}

// int main(void)
// {
// 	void
// 	return 0;
// }
