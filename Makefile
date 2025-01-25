# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 12:50:51 by vakande           #+#    #+#              #
#    Updated: 2025/01/25 10:49:57 by vakande          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

NAME = libft.a

SRCS = ft_isalpha.c \
	ft_isdigit.c \
	 ft_isalnum.c \
	 ft_isascii.c \
	 ft_isprint.c \
	 ft_strlen.c \
	 ft_memset.c \
	 ft_bzero.c \
	 ft_memcpy.c \
	 ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_ftoupper.c ft_tolower.c \
	 ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean: clean
				$(RM) $(NAME)

re:				fclean
				$(RM) $(NAME)

.PHONY:			clean fclean re
