/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 01:07:25 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 00:42:55 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

// char	ft_test(unsigned int i, char c)
// {
// 	char	r;

// 	if (c > 47 && c < 58 || c > 64 && c < 91 || c > 96 && c < 123)
// 	{
// 		printf("Character %d is alphanumeric\n", i);
// 		r = 'o';
// 	}
// 	else
// 	{
// 		printf("Character %d is not alphanumeric\n", i);
// 		r = 'x';
// 	}
// 	return (r);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main (void)
// {
// 	char	str[20] = "Hello World!";
// 	char	*result;

// 	printf("Original str: %s\n", str);
// 	result = ft_strmapi(str, ft_test);
// 	printf("Altered str: %s\n", result);
// 	return (0);
// }
