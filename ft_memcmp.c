/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 16:30:23 by ibah              #+#    #+#             */
/*   Updated: 2023/01/31 17:21:17 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	if (n == 0)
		return (0);
	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	while (n && *cast_s1 == *cast_s2)
	{
		cast_s1++;
		cast_s2++;
		n--;
	}
	if (n > 0)
		return (*cast_s1 - *cast_s2);
	else
		return (0);
}
