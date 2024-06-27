/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 23:04:00 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 00:32:31 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>
// #include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	result;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (result != 0)
			return (result);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "test\200";
// 	char	s2[] = "test\0";
// 	char	s3[] = "Samenot!";

// 	printf("s1: %s\ns2: %s\ns3: %s\n", s1, s2, s3);
// 	printf("ft_strncmp s1,s2: %d\n", ft_strncmp(s1, s2, 6));
// 	printf("strncmp s1,s2: %d\n", strncmp(s1, s2, 5));
// 	printf("ft_strncmp s1,s3: %d\n", ft_strncmp(s1, s3, 4));
// 	printf("strncmp s1,s3: %d\n", strncmp(s1, s3, 4));
// 	printf("ft_strncmp s3,s2: %d\n", ft_strncmp(s3, s2, 6));
// 	printf("strncmp s3,s2: %d\n", strncmp(s3, s2, 6));
// 	return (0);
// }
