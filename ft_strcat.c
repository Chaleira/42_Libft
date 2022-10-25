/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:42:42 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/25 20:24:48 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*strcat(char *str1, char *str2)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (str1[i] != '\0')
		i++;
	while (str2[n] != '\0')
	{
		str1[i] = str2[n];
		i++;
		n++;
	}
	str1[i] = '\0';
	return (str1);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 3)
		return (0);
	printf("%s\n", strcat(argv[1], argv[2]));
}
*/