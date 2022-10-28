/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:11:56 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/27 20:06:21 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char a)
{
	if (a >= 32 && a < 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	ft_isprint(128);
	return (0);
}
*/