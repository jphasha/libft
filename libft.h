/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 23:24:42 by jphasha           #+#    #+#             */
/*   Updated: 2019/05/30 09:36:08 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *str, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
int		ft_tolower(unsigned char c);
int		ft_toupper(unsigned char c);
int		ft_isalpha(unsigned char c);
int		ft_isprint(unsigned char c);
int		ft_isascii(int c);
int		ft_isalnum(unsigned char c);
int		ft_isdigit(unsigned char c);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
#endif
