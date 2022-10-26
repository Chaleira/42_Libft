/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaleirag14 <chaleirag14@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:29:12 by chaleirag14       #+#    #+#             */
/*   Updated: 2022/10/26 03:49:22 by chaleirag14      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char		*d;
	const char	*s;
	int			i;

	d = dest;
	s = src;
	i = 0;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
int	main(void)
{
	//int		dest[100];
	int			src[] = {0, 1, 2, 3};
	char		dest[100];
	char		csrc[] = "abcdefg";

	ft_memcpy(dest, csrc, sizeof(src));
	//printf("%d\n", dest[0]);
	printf("%s\n", dest);
}
*/