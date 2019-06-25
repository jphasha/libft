# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jphasha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/25 01:45:05 by jphasha           #+#    #+#              #
#    Updated: 2019/06/25 15:13:48 by jphasha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SOURCES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		  ft_strcat.c ft_strncat.c ft_strcmp.c ft_strncmp.c ft_strcpy.c \
		  ft_strncpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_putchar.c \
		  ft_putstr.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		  ft_strdup.c ft_strstr.c ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strequ.c \
		  ft_memchr.c ft_strclr.c ft_memcpy.c ft_memccpy.c ft_memcmp.c ft_putnbr.c \
		  ft_memset.c ft_memmove.c ft_bzero.c ft_atoi.c ft_strnew.c ft_strsub.c \
		  ft_strjoin.c ft_strtrim.c ft_putnbr_fd.c ft_memalloc.c ft_striter.c \
		  ft_striteri.c ft_strdel.c ft_memdel.c ft_strnequ.c ft_strsplit.c \
		  ft_strmap.c ft_strmapi.c ft_strlcat.c ft_itoa.c

OBJECTS = $(patsubst %.c, %.o, $(SOURCES))

flags = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) 
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

%.o: %.c
	@$(CC) -c -o $@ $< $(flags)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME) program

re: fclean all

c:
	@gcc -o program $(flags) main.c libft.a

N:
	@norminette $(SOURCES)
