/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:38:45 by ibah              #+#    #+#             */
/*   Updated: 2023/01/31 16:25:47 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;
	unsigned char	c_cast;

	s_cast = (unsigned char *)s;
	c_cast = (unsigned char)c;
	while (n)
	{
		if (*s_cast == c_cast)
			return (s_cast);
		s_cast++;
		n--;
	}
	return (NULL);
}
