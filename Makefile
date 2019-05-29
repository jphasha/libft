# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jphasha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/25 01:45:05 by jphasha           #+#    #+#              #
#    Updated: 2019/05/29 14:09:41 by jphasha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SOURCES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_strcat.c ft_strncat.c ft_strcmp.c ft_strncmp.c ft_strcpy.c \
		  ft_strncpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_putchar.c \
		  ft_putstr.c ft_putendl.c

OBJECTS = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
		  ft_strcat.o ft_strncat.o ft_strcmp.o ft_strncmp.o ft_strcpy.o \
		  ft_strncpy.o ft_strlen.o ft_tolower.o ft_toupper.o ft_putchar.o \
		  ft_putstr.o ft_putendl.o

flags = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@$(CC) -c $(SOURCES) $(flags) 
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

c:
	@gcc $(flags) main.c libft.a

N:
	@norminette $(SOURCES)
