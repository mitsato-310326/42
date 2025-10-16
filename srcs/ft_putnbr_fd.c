/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 18:00:45 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 11:03:11 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void rec_int(int n, int fd)
{
	char c;
	c = '0' - (n % 10);
	if(n > -10)
	{
		write(fd, &c, 1);
		return;
	}
	rec_int(n / 10, fd);
	ft_putchar_fd(c, fd);
}


void ft_putnbr_fd(int n, int fd)
{
	if(n >= 0)
		n = -n;
	else
		write(fd, "-", 1);
	rec_int(n, fd);
}

// int main(void)
// {
// 	ft_putnbr_fd(123, 1);
// }
