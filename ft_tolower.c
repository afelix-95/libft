/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:24:43 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 00:40:08 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

// int main() {
//     char c;

//     c = 'm';
//     printf("%c -> %c", c, ft_tolower(c));

//     c = 'Z';
//     printf("\n%c -> %c", c, ft_tolower(c));

//     c = '9';
//     printf("\n%c -> %c", c, ft_tolower(c));
//     return 0;
// }
