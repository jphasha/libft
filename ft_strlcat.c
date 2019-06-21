/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:10:12 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/21 15:12:53 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	l;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (i <= dstsize)
	{
		return (i + j);
	}
	k = 0;
	while (dst[k] != '\0' && k < (dstsize - 1))
	{
		k++;
	}
	l = 0;
	while (src[l] != '\0' && k < (dstsize - 1))
	{
		dst[k] = src[l];
		k++;
		l++;
	}
	dst[k] = '\0';
	return (k + j);
}
