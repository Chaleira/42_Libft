/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:34:34 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/10 00:29:09 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intsize(int n);
char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * ft_intsize(n));
	if (n > 10)
		n = ft_atoi(n) / 10;
	else if (n < 10)
		str[i++] = n + '0';
	return (str);
}

static int	ft_intsize(int n)
{
	int	i;

	while (n / 10 > 9)
		i++;
	if (n < 9)
		i++;
	return (i);
}
