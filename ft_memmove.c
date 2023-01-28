/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:08:28 by ibah              #+#    #+#             */
/*   Updated: 2023/01/28 14:49:07 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cast_dst;
	unsigned const char	*cast_src;

	cast_dst = (unsigned char *)dst;
	cast_src = (unsigned const char *)src;
	if (cast_src == cast_dst || len == 0)
		return (dst);
	if (cast_dst > cast_src && cast_dst - cast_src)
		while (len--)
			cast_dst[len] = cast_src[len];
	if (cast_src > cast_dst && cast_src - cast_dst)
		while (len--)
			*cast_dst++ = *cast_src++;
	return (dst);
}
