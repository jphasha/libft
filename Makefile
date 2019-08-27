# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jphasha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/25 01:45:05 by jphasha           #+#    #+#              #
#    Updated: 2019/08/27 17:00:46 by jphasha          ###   ########.fr        #
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
		  ft_strmap.c ft_strmapi.c ft_strlcat.c ft_itoa.c get_next_line.c \
		  ft_bubble_sort.c ft_swap.c ft_selection_sort.c ft_summation.c ft_lstnew.c \
		  ft_rev_print.c int_sort_tab.c ft_lstadd.c ft_atoll.c ft_array_size.c \
		  ft_word_cmp.c ft_print_hex.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \

OBJECTS = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o \
		  ft_strcat.o ft_strncat.o ft_strcmp.o ft_strncmp.o ft_strcpy.o \
		  ft_strncpy.o ft_strlen.o ft_tolower.o ft_toupper.o ft_putchar.o \
		  ft_putstr.o ft_putendl.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
		  ft_strdup.o ft_strstr.o ft_strnstr.o ft_strchr.o ft_strrchr.o ft_strequ.o \
		  ft_memchr.o ft_strclr.o ft_memcpy.o ft_memccpy.o ft_memcmp.o ft_putnbr.o \
		  ft_memset.o ft_memmove.o ft_bzero.o ft_atoi.o ft_strnew.o ft_strsub.o \
		  ft_strjoin.o ft_strtrim.o ft_putnbr_fd.o ft_memalloc.o ft_striter.o \
		  ft_striteri.o ft_strdel.o ft_memdel.o ft_strnequ.o ft_strsplit.o \
		  ft_strmap.o ft_strmapi.o ft_strlcat.o ft_itoa.o get_next_line.o \
		  ft_bubble_sort.o ft_swap.o ft_selection_sort.o ft_summation.o ft_lstnew.o \
		  ft_rev_print.o int_sort_tab.o ft_lstadd.o ft_atoll.o ft_array_size.o \
		  ft_word_cmp.o ft_print_hex.o ft_lstdel.o ft_lstdelone.o ft_lstiter.o \

flags = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) 
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

$(OBJECTS): $(SOURCES)
	@CC -c $(flags) $(SOURCES)

clean:
	@rm -rf $(OBJECTS) .*.swp

fclean: clean
	@rm -rf $(NAME) program main.c a.out

re: fclean all

c:
	@gcc -o program $(flags) main.c libft.a

N:
	@norminette $(SOURCES)
