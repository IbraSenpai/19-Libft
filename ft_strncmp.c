/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:28:25 by ibah              #+#    #+#             */
/*   Updated: 2023/01/31 15:30:57 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1cast;
	unsigned char	*s2cast;

	s1cast = (unsigned char *)s1;
	s2cast = (unsigned char *)s2;
	while (n && *s1cast && *s1cast == *s2cast)
	{
		s1cast++;
		s2cast++;
		n--;
	}
	if (n)
		return (*s1cast - *s2cast);
	else
		return (0);
}

/*
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - s2[i]);
		i++;
	}
	return (0);
}

*/