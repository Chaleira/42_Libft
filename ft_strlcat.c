/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:35:49 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/26 16:43:49 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	n;

	i = 0;
	while (dst[i] != '\0')
		i++;
	while (src[n] != '\0' && size > 0)
	{
		dst[i] = src[n];
		i++;
		n++;
		size--;
	}
	dst[i] = '\0';
}
/*
int	main(void)
{
	char	src[] = "abcdefghijklmnopqrstuvxz";
	char	dest[] = "12345";

	ft_strlcat(dest, src, sizeof(char) * 4);
	printf("%s\n", dest);
}
*/