/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:17:19 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 00:40:15 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

// int main() {
//     char c;

//     c = 'm';
//     printf("%c -> %c\n", c, ft_toupper(c));

//     c = 'D';
//     printf("%c -> %c\n", c, ft_toupper(c));

//     c = '9';
//     printf("%c -> %c\n", c, ft_toupper(c));
//     return 0;
// }
