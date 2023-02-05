/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:47:43 by ibah              #+#    #+#             */
/*   Updated: 2023/02/05 13:01:18 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 1;
	count = 0;
	if (!s[0])
		return (0);
	if (s[0] != c)
		count++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
		i++;
	}
	return (count);
}

static void	ft_free(char **spl, size_t i)
{
	while (i > 0)
	{
		free(spl[i]);
		i--;
	}
	free(spl[0]);
	free(spl);
}

static char	*ft_strndup(char const *str, size_t size)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(sizeof(*dest) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i] && i < size)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	**ft_put_str(char **spl, char const *s, char c, int i)
{
	size_t	start;
	size_t	end;

	start = 0;
	while (s[start])
	{
		end = 0;
		while (s[start + end] && s[start + end] != c)
			end++;
		if (end > 0)
		{
			spl[i] = ft_strndup(s + start, end);
			if (!spl[i])
			{
				ft_free(spl, i);
				return (NULL);
			}
			i++;
			start = start + end;
		}
		if (s[start])
			start++;
	}
	spl[i] = NULL;
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	size_t	size;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	size = ft_count_word(s, c);
	spl = (char **)malloc(sizeof(spl) * (size + 1));
	if (!spl)
		return (NULL);
	spl = ft_put_str(spl, s, c, i);
	return (spl);
}
