/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <afelix-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:34:42 by afelix-d          #+#    #+#             */
/*   Updated: 2024/06/07 00:33:54 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (2);
	}
	else
	{
		return (0);
	}
}

// int main ()
// {
//    int var1 = 'd';
//    int var2 = '2';
//    int var3 = '\t';
//    int var4 = ' ';

//    if (ft_isalpha(var1))
//    {
//       printf("var1 = |%c| is an alphabet\n", var1);
//    }
//    else
//    {
//       printf("var1 = |%c| is not an alphabet\n", var1);
//    }

//    if (ft_isalpha(var2))
//    {
//       printf("var2 = |%c| is an alphabet\n", var2);
//    }
//    else
//    {
//       printf("var2 = |%c| is not an alphabet\n", var2);
//    }

//    if (ft_isalpha(var3))
//    {
//       printf("var3 = |%c| is an alphabet\n", var3);
//    }
//    else
//    {
//       printf("var3 = |%c| is not an alphabet\n", var3);
//    }

//    if (ft_isalpha(var4))
//    {
//       printf("var4 = |%c| is an alphabet\n", var4);
//    }
//    else
//    {
//       printf("var4 = |%c| is not an alphabet\n", var4);
//    }
//    return(0);
// }
