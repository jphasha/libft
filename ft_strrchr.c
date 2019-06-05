/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:09:23 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/05 14:33:50 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *caster;
	int i;
	int lastocc;

	caster = (char *)s;
	i = 0;
	while (caster[i] != '\0')
	{
		if (caster[i] == c)
		{
			lastocc = i;
		}
		i++;
	}
	return (&caster[lastocc++]);
}
