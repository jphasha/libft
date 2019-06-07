/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 16:34:52 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/07 09:48:04 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *caster;
	char oc;
	size_t oppos;
	size_t firstocc;

	caster = (char *)s;
	oc = (char)c;
	oppos = ft_strlen(s);
	while (oppos > 0)
	{
		if (c == '\0')
		{
			return (caster + oppos);
		}
		else if (caster[oppos] == c)
		{
			firstocc = oppos;
		}
		oppos--;
	}
	if (firstocc >= oppos && oppos == 0)
	{
		return (caster + oppos);
	}
	return (NULL);
}
