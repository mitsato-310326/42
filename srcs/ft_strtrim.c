/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mitsato <mitsato@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:40:08 by mitsato           #+#    #+#             */
/*   Updated: 2025/10/16 14:41:44 by mitsato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_issplit(char look, char const *set)
{
	int	i;

	i = 0;
	while (look != set[i] && set[i])
		++i;
	return (set[i] != '\0');
}

int	can_trim(char const *s1, char const *set)
{
	int	count;

	count = 0;
	while (*s1)
	{
		if (ft_issplit(*s1, set))
			++count;
		++s1;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p1;
	int		len_str;
	int		j;

	len_str = ft_strlen(s1);
	p1 = malloc((len_str - (can_trim(s1, set)) + 1) * sizeof(char));
	j = 0;
	while (*s1)
	{
		if (!ft_issplit(*s1, set))
		{
			p1[j] = *s1;
			++j;
		}
		++s1;
	}
	p1[j] = '\0';
	return (p1);
}

// int main(void)
// {
// 	char *s = ft_strtrim("   xxxtripouille", " x");
// 	printf("%s", s);
// 	return(0);
// }
