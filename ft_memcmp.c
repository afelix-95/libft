/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:36:40 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 20:02:33 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	size_t			result;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		result = str1[i] - str2[i];
		if (result != 0)
			return (result);
		i++;
	}
	return (0);
}

// int main ()
// {
//    char str1[15];
//    char str2[15];
//    int ret;

//    memcpy(str1, "abcdef", 6);
//    memcpy(str2, "ABCDEF", 6);

//    ret = ft_memcmp(str1, str2, 5);

//    if(ret > 0) {
//       printf("str2 is less than str1\n");
//    } else if(ret < 0) {
//       printf("str1 is less than str2\n");
//    } else {
//       printf("str1 is equal to str2\n");
//    }

//    return(0);
// }
