/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:07:43 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/25 23:09:44 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_isascii(char a)
{
	if (a >= 0 && a <= 127)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
}
/*
int	main(void)
{
	ft_isascii(-1);
	return (0);
}
*/