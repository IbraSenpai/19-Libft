/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:34:21 by ibah              #+#    #+#             */
/*   Updated: 2023/02/01 13:51:46 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;

	if (*needle == '\0')
		return ((char *)haystack);
	size = ft_strlen(needle);
	while (*haystack != '\0' && len >= size)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, size) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/*
	if (*needle == '\0')
		return ((char *)haystack);
	if (len < ft_strlen(needle))
		return (NULL);
	while (*haystack && len >= ft_strlen(needle))
	{
		if (*needle == *haystack)
			if (!ft_strncmp(needle, haystack, ft_strlen(needle)))
				return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
*/