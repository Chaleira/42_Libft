/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:56:00 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/02 18:51:59 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		n;
	int		a;

	i = 0;
	n = ft_strlen((char *)set);
	a = ft_strlen((char *)s1);
	if (!s1)
		return (NULL);
	if (ft_strncmp(s1, set, a) == 0)
		str = ft_substr(s1, n, a);
	if (ft_strncmp(str, set, ft_strlen(str)))
		str = ft_substr(str, 0, (ft_strlen(str) - n));
	return (str);
}
