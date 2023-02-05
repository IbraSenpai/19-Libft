/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:28:39 by ibah              #+#    #+#             */
/*   Updated: 2023/02/05 13:42:38 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	if (!s || ! f)
		return (NULL);
	res = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res)
		return (res);
	i = 0;
	while (s[i])
	{
		res[i] = (f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
