/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaleirag14 <chaleirag14@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 04:05:43 by chaleirag14       #+#    #+#             */
/*   Updated: 2022/10/26 04:31:30 by chaleirag14      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, int n)
{
	char		*d;
	const char	*s;
	char		*t;
	int			i;

	t = dest;
	s = src;
	i = 0;
	while (n > i)
	{
		t[i] = s[i];
		i++;
	}
	d = t;
	return (d);
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