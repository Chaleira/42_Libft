/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:29:12 by chaleirag14       #+#    #+#             */
/*   Updated: 2022/10/26 23:35:11 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long int	i;

	i = 0;
	while (n > i)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (((char *)dest));
}
/*
int	main(void)
{
	//int		dest[100];
	int			src[] = {0, 1, 2, 3};
	char		dest[100];
	char		csrc[] = "abcdefg";

	ft_memcpy(dest, csrc, sizeof(src));
	//printf("%d\n", dest[0]);
	printf("%s\n", dest);
}
*/
/*
int	main(void)
{
	char	str[] = "abcdefg";
	char	str2[] = "1234567";

	memmove (str + 2, str, 6);
	puts (str);
	printf("%p\n", &str[7]);
	printf("%p\n", &str2[7]);
	ft_memcpy (str2 + 2, str2, 4);
	puts (str2);
}
*/