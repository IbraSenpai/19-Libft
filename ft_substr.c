/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:43:38 by ibah              #+#    #+#             */
/*   Updated: 2023/02/02 15:15:58 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	if ((ft_strlen(s) - start) < len)
		res = (malloc(sizeof(char) * (ft_strlen(s) - start) + 1));
	else
		res = (malloc(sizeof(char) * (len) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}
