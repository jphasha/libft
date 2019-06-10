/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:20:55 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/10 10:29:57 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *pdst;
	unsigned char *psrc;
	size_t dstit;
	size_t srcit;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	dstit = 0;
	srcit = 0;
	while (dstit < n && srcit < n)
	{
		pdst[dstit] = psrc[srcit];
		dstit++;
		srcit++;
	}
	return (dst);
}
