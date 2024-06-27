/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:16:49 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 00:33:11 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_whitespace(const char *nptr)
{
	int	i;

	i = 0;
	while ((nptr[i] > 8 && nptr[i] < 14) || nptr[i] == 32)
	{
		i++;
	}
	return (i);
}

int	ft_sign(char pn)
{
	int	m;

	if (pn == 45)
		m = -1;
	else
		m = 1;
	return (m);
}

int	ft_atoi(const char *nptr)
{
	long	result;
	int		m;
	int		i;

	i = ft_whitespace(nptr);
	m = ft_sign(nptr[i]);
	result = 0;
	if (nptr[i] == 43 || nptr[i] == 45)
		i++;
	while (nptr[i] != '\0')
	{
		while (nptr[i] >= 48 && nptr[i] <= 57)
		{
			result *= 10;
			result += nptr[i] - 48;
			i++;
		}
		if (result > 0)
			return (result * m);
		else
			return (0);
	}
	return (0);
}

// int	main(void)
// {
// 	char	test[] = "   +95-58";

// 	printf("test string: %s\n", test);
// 	printf("ft_atoi result: %d\n", ft_atoi(test));
// 	return (0);
// }
