/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:47:50 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/21 10:42:12 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*fs;

	i = 0;
	fs = (char *)malloc(ft_strlen(s) + 1);
	if (!s && !f)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		fs[i] = f(s[i]);
		i++;
	}
	fs[i] = '\0';
	return (fs);
}
