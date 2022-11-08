/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:35:43 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/08 18:43:34 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_words(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char		**str;
	int			first;
	int			last;
	int			i;
	int			y;

	first = 0;
	y = 0;
	if (!s)
		return (0);
	str = malloc((ft_words(s, c) + 1) * sizeof(char *));
	last = ft_strlen(s) - 1;
	if (!str)
		return (0);
	while (s[first] == c)
		first++;
	while (s[last] == c)
		last--;
	i = 0;
	while (first <= last)
	{
		while (s[first + i] != c)
			i++;
		str[y] = ft_substr(s, first, i);
		first = first + i;
		i = 0;
		while (s[first] == c && s[first] != '\0')
			first++;
		y++;
	}
	str[y] = 0;
	return (str);
}

static	size_t	ft_words(char const *s, char c)
{
	int	i;
	int	n;
	int	u;

	u = 0;
	i = 0;
	n = 0;
	while (s[u] != '\0')
	{
		if (s[u] != c && i == 0)
		{
			i = 1;
			n++;
		}
		else if (s[u] == c)
			i = 0;
		u++;
	}
	return (n);
}
/*
int	main(void)
{
	char	**str;
	int i;

	i = 0;
	str = ft_split("Tripouille", ' ');
	while (i <= 1)
	{
		printf("%s\n", str[i]);
		i++;
	}
	return (0);
}

static int	count_words(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
*/