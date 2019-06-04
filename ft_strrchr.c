/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:09:23 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/04 17:25:45 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int lastocc;

	i = 0;
	while (s[i] != '\0')
	{
		if ((char)c == s[i])
		{
			lastocc = i;
			if (s[i + 1] == '\0')
			{
				return ((char *)s[lastocc++]);
			}
		}
		i++;
	}
	return (NULL);
}
