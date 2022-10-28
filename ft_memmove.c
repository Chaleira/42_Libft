/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 04:05:43 by chaleirag14       #+#    #+#             */
/*   Updated: 2022/10/27 21:05:49 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		t[100];
	size_t		i;

	i = 0;
	while (n > i)
	{
		t[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
	while (n > i)
	{
		((char *)dest)[i] = t[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	dest[100];
	char	src[] = {1, 2, 3, 4, 5, 6, 7};

	ft_memmove(dest, src, 5);
	printf("%d\n", dest[5]);
}
*/
/*	while (n > i)
	{
		t[i] = ((char *)src)[i];
		i++;
	}
	i = 0;*/