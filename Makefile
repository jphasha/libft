# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jphasha <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/25 01:45:05 by jphasha           #+#    #+#              #
#    Updated: 2019/09/20 15:03:11 by jphasha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRC_FILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
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
		  ft_rev_print.c int_sort_tab.c ft_lstadd.c ft_atoll.c \
		  ft_word_cmp.c ft_print_hex.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
		  ft_lstmap.c ft_loop_memdel.c ft_prnt_arr.c ft_array_size.c ft_array_concat.c \
		  ft_strisdigit.c
SRC_PATH = srcs/
SOURCES = $(addprefix $(SRC_PATH), $(SRC_FILES))

OBJS_PATH = objs/
OBJS_DIRS = $(addprefix $(OBJS_PATH), libft_obj/)
OBJECTS = $(addprefix $(OBJS_DIRS), $(SRC_FILES:.c=.o))

INCLUDES_PATH = includes/
INCLUDES = -I $(INCLUDES_PATH)

HEADER_FILES = libft.h
HEADERS = $(addprefix $(INCLUDES_PATH), $(HEADER_FILES))

flags = -Wall -Wextra -Werror

all: $(NAME)

$(OBJS_DIRS)%.o: $(SRC_PATH)%.c $(HEADERS)
	mkdir $(OBJS_PATH) 2> /dev/null || true
	mkdir $(OBJS_DIRS) 2> /dev/null || true
	$(CC) $(flags) $(INCLUDES) -o $@ -c $<

$(NAME): $(OBJECTS) 
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

# $(OBJECTS): $(SOURCES)
# 	$(CC) -c $(flags) $(SOURCES)

clean:
	rm -rf $(OBJECTS) .*.swp
	rmdir $(OBJS_DIRS) 2> /dev/null || true
	rmdir $(OBJS_PATH) 2> /dev/null || true

fclean: clean
	rm -rf $(NAME) program main.c a.out

re: fclean all

c:
	gcc -o program $(flags) main.c libft.a

N:
	norminette $(SOURCES)
