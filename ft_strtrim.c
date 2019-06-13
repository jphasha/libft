/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:41:46 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/13 10:21:43 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	char *ps;
	char *cs;
	size_t len;
	size_t msi;
	size_t csi;

	i = 0;
	ps = (char *)s;
	len = ft_strlen(s);
	while (ps[i] != '\0')
	{
		while (ps[i] == ' ' || ps[i] == ',' || ps[i] == '\t')
		{
			i++;
		}
		while (len > i && (ps[len] == ' ' || ps[len] == ',' || ps[len] == '\t'))
		{
			len--;
		}
	}
	msi = len - i + 1;
	cs = (char *)malloc(msi);
	if (cs == NULL)
	{
		return (NULL);
	}
	csi = 0;
	while (csi < msi)
	{
		cs[csi] = ps[i];
		csi++;
		i++;
	}
	cs[csi] = '\0';
	return (cs);
}
