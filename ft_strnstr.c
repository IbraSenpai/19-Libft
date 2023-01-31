/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:34:21 by ibah              #+#    #+#             */
/*   Updated: 2023/01/31 19:06:24 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (ft_strlen(needle) == 0)
		return (haystack);
	if (len < ft_strlen(needle))
		return (NULL);
	while (len && *haystack && *needle)
	{
		if (*needle == *haystack)
			needle++;
		len--;
	}
	if (len && !needle)
		return (haystack);
}
