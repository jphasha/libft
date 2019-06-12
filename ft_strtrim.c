/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:41:46 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/12 17:53:10 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	char *cpstr;

	i = 0;
	cpstr = (char *)malloc(+1);
	if (cpstr == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if 
		i++;
	}
	cpstr[i] = '\0';
	return (cpstr);
}
