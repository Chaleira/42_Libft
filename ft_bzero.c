/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaleirag14 <chaleirag14@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 03:54:19 by chaleirag14       #+#    #+#             */
/*   Updated: 2022/10/26 04:03:56 by chaleirag14      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_bzero(void *s, int n)
{
	char	*p;
	int		i;

	p = s;
	i = 0;
	while (n > i)
	{
		p[i] = '\0';
		i++;
	}
	return (p);
}
/*
int	main(void)
{
	char	buffer[100];

	ft_bzero(buffer, 20);
	printf("%d\n", buffer[5]);
}
*/