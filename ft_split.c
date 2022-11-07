/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:35:43 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/07 19:53:57 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_malloc_size(char const *s, char c);
size_t	ft_strings(char const *s, char c);
char	**new_split(char const *s, char c, char **str);

char	**ft_split(char const *s, char c)
{
	char		**str;
	char		**newstr;

	str = malloc((sizeof(char *)) * ft_strings(s, c));
	if (!str)
		return (NULL);
	newstr = new_split(s, c, str);
	return (newstr);
}

char	**new_split(char const *s, char c, char **str)
{
	int	i;
	int	y;	
	int	x;

	y = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		str[y] = malloc(ft_malloc_size(s + i, c));
		x = 0;
		while (s[i] != c && s[i] != '\0')
		{
			str[y][x] = s[i];
			i++;
			x++;
		}
		str[y][x] = '\0';
		y++;
	}
	return (str);
}

size_t	ft_malloc_size(char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i] != '\0')
	{
		n++;
		i++;
	}
	n++;
	return (n);
}

size_t	ft_strings(char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (s[0] != c)
		n++;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (s[i + 1] != c)
				n++;
		}
		i++;
	}
	if (s[(ft_strlen(s)) - 1] == c)
		n--;
	return (n);
}
/* 
int	main(void)
{
	char	str[] = "      split       this for   me  !       ";
	char	**strf;

	strf = ft_split(str, ' ');
	//printf("%ld\n", ft_strings(str, ' '));
	printf("%c", strf[4][0]);
	return (0);
}
 */