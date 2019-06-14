/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:10:12 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/14 15:57:51 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	agglen;
	size_t	dstit;
	size_t	srcit;

	dstit = 0;
	while (dst[dstit] != '\0')
	{
		dstit++;
	}
	srcit = 0;
	while (src[srcit] != '\0' && srcit < dstsize)
	{
		srcit++;
	}
	return (agglen);
}
