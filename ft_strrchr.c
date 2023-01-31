/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:16:30 by ibah              #+#    #+#             */
/*   Updated: 2023/01/31 14:18:23 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

/*{
	size_t	i;

	i = ft_strlen(s);
	if (i == 0)
		return (NULL);
	while (i >= 0 && (char)c != s[i])
		i--;
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}*/