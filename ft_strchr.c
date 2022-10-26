/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:05:53 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/26 18:34:02 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (((char *)s)[i] != '\0')
	{
		if (c == ((char *)s)[i])
		{
			return (&((char *)s)[i]);
		}
		i++;
	}
	return (((char *)s));
}
/*
int	main(void)
{
	char	src[] = "abcdefghijklmnopqrstuvxz";
	char	d;

	d = '0';
	printf("%s\n", ft_strchr(src, d));
}
*/