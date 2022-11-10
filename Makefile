# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 19:51:35 by plopes-c          #+#    #+#              #
#    Updated: 2022/11/10 20:52:02 by plopes-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_isprint.c	ft_isalnum.c	ft_memcmp.c		ft_substr.c		ft_strjoin.c	\
					ft_strlcat.c	ft_strncmp.c	ft_atoi.c		ft_isalpha.c	ft_strtrim.c	\
					ft_memcpy.c		ft_strchr.c		ft_strlcpy.c	ft_calloc.c		ft_split.c		\
					ft_strnstr.c	ft_tolower.c	ft_bzero.c		ft_isascii.c 	ft_itoa.c		\
					ft_memmove.c	ft_strlen.c		ft_strrchr.c	ft_strdup.c		ft_strmapi.c	\
					ft_toupper.c	ft_isdigit.c	ft_memchr.c		ft_memset.c		ft_striteri.c	\
					ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c	
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I .

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY:			all clean fclean re bonus
