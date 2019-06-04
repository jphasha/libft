/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 15:49:32 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/04 16:29:15 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char *x;
	const char *y;

	if (*needle != '\0')
	{
		return ((char *)haystack);
	}
	while (haystack != '\0' && ft_strlen(haystack) < len)
	{
		x = haystack;
		y = needle;
		while (*needle != '\0' && *x == *y)
		{
			x++;
			y++;
		}
		if (*y == '\0')
		{
			return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
