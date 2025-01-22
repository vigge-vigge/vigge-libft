# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vakande <vakande@student.42barcelona.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/18 12:50:51 by vakande           #+#    #+#              #
#    Updated: 2025/01/18 14:41:53 by vakande          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

NAME = libft.a

SRCS = ft_isalpha.c \
	ft_isdigit.c \
	# ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strcat ft_ftoupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi */
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean: clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
