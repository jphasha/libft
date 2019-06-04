/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 10:17:24 by event             #+#    #+#             */
/*   Updated: 2019/06/04 11:33:39 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int i;
	char *srccpy;

	srccpy = (char *)malloc(sizeof(char *) * (ft_strlen(src) + 1));
	i = 0;
	if (src[i] == '\0')
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		ft_strcpy(srccpy, src);
	}
	return (srccpy);
}
