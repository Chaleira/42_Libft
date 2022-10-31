/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:07:46 by plopes-c          #+#    #+#             */
/*   Updated: 2022/10/28 23:57:45 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		ft_atoi(const char *nptr);
void	*ft_bzero(void *s, int n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(char a);
int		ft_isalpha(char a);
int		ft_isascii(char a);
int		ft_isdigit(char c);
int		ft_isprint(char a);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, unsigned long int size);
int		ft_strlen(char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
char	*ft_strnstr(const char	*big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif