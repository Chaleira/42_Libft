/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:32:44 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/26 21:47:14 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (((unsigned char *)s)[i] != '\0' && n > 0)
	{
		if (((unsigned char *)s)[i] == c)
			return (&((unsigned char *)s)[i]);
		i++;
		n--;
	}
	return ('\0');
}
/*
int	main(void)
{
	char	s[] = "lisboa";
	int		c;

	c = 'j';
	puts(ft_memchr(s, c, 6));
	return (0);
}
*/