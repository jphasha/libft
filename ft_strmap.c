/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:47:50 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/14 10:32:55 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t i;
	size_t j;
	char *fs;

	i = 0;
	j = 0;
	fs = (char *)malloc(ft_strlen(s) + 1);
	if (!s || !f || !fs)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		f(&fs[j]) = f(&s[i]);
		i++;
		j++;
	}
	fs[i] = '\0';
	return (fs);
}
