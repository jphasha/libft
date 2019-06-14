/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:19:38 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/14 15:49:39 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			s1it;
	size_t			s2it;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	s1it = 0;
	s2it = 0;
	while (ps1[s1it] == ps2[s2it] && s1it < n && s2it < n)
	{
		if (ps1[s1it] == '\0' && ps2[s2it] == '\0')
		{
			return (0);
		}
		s1it++;
		s2it++;
	}
	return (ps1[s1it] - ps2[s2it]);
}
