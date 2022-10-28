/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:13:20 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/28 01:07:06 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	if (little[0] == '\0')
		return (((char *)big));
	while (big[i] != '\0' && len > 0)
	{
		if (big[i] == little[n])
		{
			n++;
			if (little[n] == '\0')
				return (&((char *)big)[i - n + 1]);
		}
		else
			n = 0;
		i++;
		len--;
	}
	return (NULL);
}
/* 
int	main(void)
{
	char	str[] = "Lisboakjf,jshfisjsdboa";
	char	str2[] = "i";

	puts(strnstr(str, str2, 2));
	return (0);
}
 */