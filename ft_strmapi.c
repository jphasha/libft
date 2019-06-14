/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:41:33 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/14 16:19:03 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*fs;

	i = 0;
	fs = (char *)malloc(ft_strlen(s) + 1);
	if (!s || !f || !fs)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		f(&fs[i]) = f(i, &s[i]);
		i++;
	}
	fs[i] = '\0';
	return (fs);
}
