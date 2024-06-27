/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 01:38:09 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 00:37:50 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	ft_test(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && *c > 96 && *c < 123)
// 		*c -= 32;
// }

// int	main (void)
// {
// 	char	str[20] = "Hello World!";

// 	printf("Original str: %s\n", str);
// 	ft_striteri(str, ft_test);
// 	printf("Altered str: %s\n", str);
// 	return (0);
// }
