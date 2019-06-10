# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jphasha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/25 01:45:05 by jphasha           #+#    #+#              #
#    Updated: 2019/06/10 10:53:12 by jphasha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SOURCES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_strcat.c ft_strncat.c ft_strcmp.c ft_strncmp.c ft_strcpy.c \
		  ft_strncpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_putchar.c \
		  ft_putstr.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		  ft_strdup.c ft_strstr.c ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strequ.c \
		  ft_memchr.c ft_strclr.c ft_memcpy.c ft_memccpy.c ft_memcmp.c ft_memmove.c

OBJECTS = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
		  ft_strcat.o ft_strncat.o ft_strcmp.o ft_strncmp.o ft_strcpy.o \
		  ft_strncpy.o ft_strlen.o ft_tolower.o ft_toupper.o ft_putchar.o \
		  ft_putstr.o ft_putendl.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
		  ft_strdup.o ft_strstr.o ft_strnstr.o ft_strchr.o ft_strrchr.o ft_strequ.o \
		  ft_memchr.o ft_strclr.o ft_memcpy.o ft_memccpy.o ft_memcmp.o ft_memmove.o

flags = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) 
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

$(OBJECTS):
	@$(CC) -c $(SOURCES) $(flags)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME) program

re: fclean all

c:
	@gcc -o program $(flags) main.c libft.a

N:
	@norminette $(SOURCES)
