/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaleirag14 <chaleirag14@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:59:37 by chaleirag14       #+#    #+#             */
/*   Updated: 2022/10/26 03:51:02 by chaleirag14      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memset(void *s, int c, int n)
{
	char	*p;
	int		i;

	p = s;
	i = 0;
	while (n > i)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
/*
int	main(void)
{
	char	buffer[100];

	ft_memset(buffer, 100, 20);
	printf("%d\n", buffer[1]);
}
*/