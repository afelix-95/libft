/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:45:04 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 00:35:22 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main ()
// {
//    int var1 = 'h';
//    int var2 = '2';

//    if( ft_isdigit(var1) )
//    {
//       printf("var1 = |%c| is a digit\n", var1 );
//    }
//    else
//    {
//       printf("var1 = |%c| is not a digit\n", var1 );
//    }

//    if( ft_isdigit(var2) )
//    {
//       printf("var2 = |%c| is a digit\n", var2 );
//    }
//    else
//    {
//       printf("var2 = |%c| is not a digit\n", var2 );
//    }

//    return(0);
// }
