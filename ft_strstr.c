/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:32:20 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/04 15:30:50 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char *x;
	const char *y;

	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack != '\0')
	{
		x = haystack;
		y = needle;
		while (*needle != '\0' && *x == *y)
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
