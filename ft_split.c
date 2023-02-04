/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibah <ibah@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:47:43 by ibah              #+#    #+#             */
/*   Updated: 2023/02/04 13:48:01 by ibah             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_charset(char c, char *charset)
{
	int	j;

	j = 0;
	while (charset[j] && (c != charset[j]))
		j++;
	if (c == charset[j])
		return (1);
	else
		return (0);
}

int	word_counter(char *str, char *charset)
{
	int	i;
	int	wc;

	i = 0;
	wc = 0;
	while (str[i])
	{
		while (str[i] && check_charset(str[i], charset) == 1)
			i++;
		if (check_charset(str[i], charset) == 0)
		{
			wc++;
			while (str[i] && check_charset(str[i], charset) == 0)
				i++;
		}
	}
	return (wc);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc(sizeof(*tab) * (word_counter(s, c) + 1));
	if (!tab)
		return (0);
	while (s[i] && j < word_counter(s, c))
	{
		while (s[i] && check_charset(s[i], c) == 1)
			i++;
		tab[j] = malloc(sizeof(*s) * (ft_strlen(&s[i], c) + 1));
		if (!tab[j])
			return (0);
		while (s[i] && check_charset(s[i], c) == 0)
			tab[j][k++] = s[i++];
		tab[j++][k] = '\0';
		k = 0;
	}
	tab[j] = 0;
	return (tab);
}
