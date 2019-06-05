/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:34:52 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/05 15:53:50 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;
	int firstocc;
	char *strptr;
	char ch;

	i = 0;
	while (s[i] != '\0')
	{
		strptr = (char *)s;
		ch = c;
		if (strptr[i] == ch)
		{
			return (&strptr[i++]);
		}
		i++;
	}
	return (0);
}
