/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:54:22 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 00:32:32 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*large;
	char	*small;

	i = 0;
	j = 0;
	large = (char *)big;
	small = (char *)little;
	if (small[j] == '\0' || large == small)
		return (large);
	while (large[i] != '\0' && i < len)
	{
		while (large[i + j] == small[j] && large[i + j] != '\0'
			&& (i + j) < len)
			j++;
		if (small[j] == '\0')
		{
			return (&large[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}

// int	main ()
// {
// 	const char *largestring = "Foo Bar Baz";
//     const char *smallstring = "Baz";
//     char *ptr;

//     ptr = ft_strnstr(largestring, smallstring, 4);
// 	printf("Result:%s\n", ptr);
// 	return (0);
// }
