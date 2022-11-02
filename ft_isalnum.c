/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:02:38 by plopes-c          #+#    #+#             */
/*   Updated: 2022/11/02 16:26:51 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (a >= 65 && a <= 90)
		return (1);
	else if (a >= 97 && a <= 122)
		return (1);
	else if (a >= 48 && a <= 57)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	ft_isalnum('.');
	return (0);
}
*/