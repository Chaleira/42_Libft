/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:13:11 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/25 23:00:07 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_isdigit(char a)
{
	if (a >= 48 && a <= 57)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
}
/*
int	main(void)
{
	ft_isdigit('0');
	return (0);
}
*/
//alias cr='f(){ gcc -Wall -Wextra -Werror "$@" && ./a.out}; f'