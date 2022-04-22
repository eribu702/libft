# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroberts <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 13:15:58 by aroberts          #+#    #+#              #
#    Updated: 2022/04/21 14:51:56 by aroberts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalpha.c \
	  		ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_strlen.c \
			ft_atoi.c \
			ft_memchr.c \
			ft_memset.c \
			ft_bzero.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memmove.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strnstr.c \

OBJS	= $(SRCS:%.c=%.o)

FLAGS	= -Wall -Wextra -Werror

$(NAME):
		gcc $(FLAGS) -c $(SRCS) -I./
		ar rc $(NAME) $(OBJS)

all:$(NAME)

clean:
		rm -f $(NAME)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, recd ~/Desktop/resources/libft/libft
