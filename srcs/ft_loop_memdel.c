/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop_memdel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 14:12:53 by jphasha           #+#    #+#             */
/*   Updated: 2019/09/20 14:24:27 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_loop_memdel(void **mem)
{
	int		i;

	i = 0;
	if (mem)
	{
		while (mem[i] != NULL)
		{
			free(mem[i]);
			mem[i] = NULL;
			i++;
		}
		if (mem)
			free(mem);
		mem = NULL;
	}
}
