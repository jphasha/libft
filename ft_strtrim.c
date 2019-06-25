/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:41:46 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/25 16:56:17 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*cs;
	size_t	size;
	size_t	x;
	size_t	i;
	size_t	j;

	if (!s)
	{
		return (0);
	}
	if (s[0] == '\0')
	{
		return ((char *)s);
	}
	i = 0;
	while (s[i] != '\0' && ((s[i] >= 9 && s[i] <= 13) || s[i] == 32))
	{
		i++;
	}
	if (s[i] == '\0')
	{
		return (ft_strcpy(ft_strnew(1), ""));
	}
	j = ft_strlen(s) - 1;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && j >= 0)
	{
		j--;
	}
	size = j - i + 1;
	cs = (char *)malloc(sizeof(char) * (size + 1));
	if (cs == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (i <= j)
	{
		cs[x] = s[i];
		x++;
		i++;
	}
	cs[x] = '\0';
	return (cs);
}
