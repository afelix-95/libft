/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:34:00 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 00:35:34 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main()
// {
//     char c;

//     c = 'Q';
//     printf("Result when a printable character %c
//is passed to isprint(): %d\n", c, ft_isprint(c));

//     c = '\n';
//     printf("Result when a control character %c
//is passed to isprint(): %d\n", c, ft_isprint(c));

//     return 0;
// }
