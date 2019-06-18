/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:41:46 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/18 16:18:12 by jphasha          ###   ########.fr       */
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
	
	j = ft_strlen(s) - 1;
	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	while (((s[i] == '\t') || (s[i] == '\n') || (s[i] == ' ')) && s[i] != '\0')
	{
		i++;
	}
	while (s[j] != '\0')
	{
		j++;
	}
	j--;
	while (((s[j] == ' ') || (s[j] == '\n') || (s[j] == '\t'	)) && j >= 0)
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
