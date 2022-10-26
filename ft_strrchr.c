/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:45:37 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/26 19:25:38 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (((char *)s)[i] != '\0')
		i++;
	while (((char *)s)[0])
	{
		if (c == ((char *)s)[i])
		{
			return (&((char *)s)[i]);
		}
		i--;
	}
	return (((char *)s));
}
/*
int	main(void)
{
	char	src[] = "abqqqqcdefqqqghijqqqklmnopqarstquvxz";
	char	d;

	d = 'q';
	printf("%s\n", ft_strchr(src, d));
}
*/