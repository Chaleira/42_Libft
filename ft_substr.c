/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:34:35 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/02 17:51:53 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	size_t				i;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (s && len > 0
		&& start <= (unsigned int)ft_strlen((char *)s))
	{
		str[i] = s[start];
		start++;
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
