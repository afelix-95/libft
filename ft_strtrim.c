/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:51:05 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 01:54:53 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_set_check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		start;
	int		end;
	int		i;

	start = 0;
	while (s1[start] != '\0' && ft_set_check(s1[start], set) == 1)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_set_check(s1[end - 1], set) == 1)
		end--;
	trim = malloc(sizeof(char) * (end - start + 1));
	if (trim == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		trim[i++] = s1[start++];
	trim[i] = 0;
	return (trim);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*set;
// 	char	*result;

// 	s1 = "xXxTestxXx";
// 	set = "xXx";
// 	result = ft_strtrim(s1, set);
// 	printf("%s\n", result);
// 	return(0);
// }
