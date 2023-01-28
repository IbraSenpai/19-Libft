/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:53:08 by ibah              #+#    #+#             */
/*   Updated: 2023/01/28 15:01:52 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*new_dst;
	const char	*new_src;

	if (n == 0 || src == dst)
	{
		return (dst);
	}
	if (!dst && !src)
	{
		return (NULL);
	}
	i = 0;
	new_dst = (char *)dst;
	new_src = (const char *)src;
	while (i < n)
	{
		new_dst[i] = new_src[i];
		i++;
	}
	return (dst);
}
