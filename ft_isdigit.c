/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:13:11 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/27 19:23:33 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char a)
{
	if (a >= 48 && a <= 57)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	ft_isdigit('0');
	return (0);
}
*/
//alias cr='f(){ gcc -Wall -Wextra -Werror "$@" && ./a.out}; f'