/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmalloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 14:12:28 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/14 16:08:34 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = (char *)malloc(size + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		mem[i] = 0;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
