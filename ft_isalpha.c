/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:53:19 by ibah              #+#    #+#             */
/*   Updated: 2023/01/25 16:40:39 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
int main()
{
	char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d, %d", isalpha(c),
	 ft_isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d,%d", isalpha(c), 
	ft_isalpha(c));

    c='?';
    printf("\nResult when non-alphabetic character is passed: %d,%d", 
	isalpha(c), ft_isalpha(c));

    return 0;
}
*/