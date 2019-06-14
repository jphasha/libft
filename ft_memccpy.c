/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:21:17 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/14 15:41:58 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	unsigned char	oc;
	size_t			i;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	oc = c;
	i = 0;
	while (pdst[i])
	{
		if (psrc[i] && i < n)
		{
			if (pdst[i] == oc)
			{
				return (dst);
			}
			pdst[i] = psrc[i];
		}
		i;
	}
	pdst[i] = '\0';
	return (dst);
}
