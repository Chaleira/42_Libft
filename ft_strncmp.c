/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:27:36 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/26 20:30:15 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	int	n;

	n = 0;
	while ((s2[n] != '\0' || s1[n] != '\0') && size > 0)
	{
		if (s1[n] > s2[n])
			return (1);
		if (s1[n] < s2[n])
			return (-1);
		n++;
		size--;
	}
	return (0);
}
/*
int	main(void)
{
	char	src1[] = "lisb";
	char	src2[] = "lisboa";

	printf("%d\n", ft_strncmp(src1, src2, 5));
}
*/