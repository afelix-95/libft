/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:21:32 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 00:34:07 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main( void )
// {
//     int i;
// 	char the_chars[] = { 'A', 0x80, '\t' };

//     for( i = 0; i < sizeof( the_chars ) / sizeof( char ); i++ ) {
//         if( ft_isascii( the_chars[i] ) ) {
//             printf( "Char %c is an ASCII character\n",
//                 the_chars[i] );
//         } else {
//             printf( "Char %c is not an ASCII character\n",
//                 the_chars[i] );
//         }
//     }

//     return (0);
// }
