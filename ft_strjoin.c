/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 17:38:26 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 01:29:11 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	int		i;
	int		j;

	cat = malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (cat == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] != '\0')
		cat[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		cat[i++] = s2[j++];
	cat[i] = 0;
	return (cat);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*result;

// 	s1 = "42";
// 	s2 = "School";
// 	result = ft_strjoin(s1, s2);
// 	printf("%s\n", result);
// 	return (0);
// }
