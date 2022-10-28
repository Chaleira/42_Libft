/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:32:44 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/27 21:09:09 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s)[i] && n > 0)
	{
		if (((char *)s)[i] == c)
			return (&((char *)s)[i]);
		i++;
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "lisboa";
	int		c;

	c = 'l';
	puts(ft_memchr(s, c, 6));
	return (0);
}
*/