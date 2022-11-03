/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:56:00 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/03 20:59:42 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (len > -1 && ft_strchr(set, s1[len - 1]))
		len--;
	str = ft_substr(s1, (unsigned int)i, (len - i));
	return (str);
}
/*
int	main(void)
{
	const char	s1[] = "abcdefghiabc";
	const char	set[] = "abcd";

	puts(ft_strtrim(s1, set));
	return (0);
}
 */