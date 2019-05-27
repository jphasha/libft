# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jphasha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/25 01:45:05 by jphasha           #+#    #+#              #
#    Updated: 2019/05/27 09:50:26 by jphasha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SOURCES = ft_isalpha.c ft_isprint.c ft_strlen.c ft_strcpy.c ft_tolower.c ft_toupper.c ft_strncpy.c \
		  ft_isascii.c ft_isalnum.c ft_isdigit.c ft_strcmp.c ft_strncmp.c

OBJECTS = ft_isalpha.o ft_isprint.o ft_strlen.o ft_strcpy.o ft_tolower.o ft_toupper.o ft_strncpy.o \
		  ft_isascii.o ft_isalnum.o ft_isdigit.o ft_strcmp.o ft_strncmp.o

flags = -Wall -Wextra -Werror

$(NAME): $(OBJECTS)
	CC -o $(NAME) $(OBJECTS)

$(OBJECTS): $(SOURCES)
	CC flags -c -o $(SOURCES)

clean:
	rm -f $(OBJECTS)
