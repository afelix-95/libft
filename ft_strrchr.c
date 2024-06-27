/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:57:35 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/08 00:48:00 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = ft_strlen(s);
	str = (char *)s;
	if ((char)c == '\0')
		return (&str[i]);
	i--;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}

// int main ()
// {
// 	const char str[] = "teste";
// 	const char ch = 'e';
// 	char *ret;
// 	char s[] = "tripouille";

// 	ret = ft_strrchr(str, ch);
// 	printf("String after |%c| is - |%s|\n", ch, ret);
// 	printf("%s\n", ft_strrchr(s, 't' + 256));
// 	return(0);
// }
