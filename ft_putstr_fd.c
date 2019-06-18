/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 08:17:34 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/18 09:34:41 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int i;

	i = 0;
	if (str && fd)
	{
		while (str[i] != '\0')
		{
			write(fd, &str[i], 1);
			i++;
		}
	}
	return ;
}
