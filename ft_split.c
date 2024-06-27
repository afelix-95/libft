/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:52:22 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/08 00:42:37 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

static size_t	count_strings(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	if (count == 0 && s[i - 1] == c)
		return (1);
	return (count);
}

static void	ft_freemem(size_t i, char **matrix)
{
	while (i > 0)
		free(matrix[--i]);
	free(matrix);
}

static size_t	ft_strlenc(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static size_t	ft_allocstr(char **matrix, size_t n, const char *s, char c)
{
	size_t	i;
	size_t	len;

	len = ft_strlenc(s, c);
	matrix[n] = malloc((len + 1) * sizeof(char));
	if (!matrix[n])
	{
		ft_freemem(n, matrix);
		return (0);
	}
	i = 0;
	while (i < len)
	{
		matrix[n][i] = s[i];
		i++;
	}
	matrix[n][i] = '\0';
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**matrix;

	matrix = (char **)malloc((count_strings(s, c) + 1) * sizeof(char *));
	if (matrix == NULL)
		return (0);
	i = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			if (ft_allocstr(matrix, i, s, c) == 0)
				return (NULL);
			i++;
		}
		while (*s != '\0' && *s != c)
			s++;
	}
	matrix[i] = NULL;
	return (matrix);
}

// int	main(void)
// {
// 	int		i;
// 	char	**matrix;
// 	char	s[] = "^^^1^^2a,^^^^3^^^^--h^^^^";
// 	char	c = '^';

// 	matrix = ft_split(s, c);
// 	i = 0;
// 	while (matrix[i] != 0)
// 		printf("%s\n", matrix[i++]);
// 	return (0);
// }
