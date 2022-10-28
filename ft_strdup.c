/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 18:46:36 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/28 19:51:10 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = malloc(ft_strlen((char *)s));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, ft_strlen((char *)s - 2));
	return (str);
}
/* 
int	main(void)
{
	const char	str[] = "abcd";

	puts(ft_strdup(str));
	return (0);
}
 */