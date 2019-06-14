/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:09:23 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/14 16:03:59 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*caster;
	char	oc;
	size_t	oppos;

	caster = (char *)s;
	oc = (char)c;
	oppos = ft_strlen(s);
	while (oppos > 0)
	{
		if (caster[oppos] == oc)
		{
			return (caster + oppos);
		}
		oppos--;
	}
	return (NULL);
}
