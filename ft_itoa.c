/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 08:10:48 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/17 08:53:42 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	size_t		i;
	size_t		numlen;

	numlen = ft_strlen(ft_atoi(n));
	str = (char *)malloc(sizeof(char) * (numlen + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	if (n < 0)
	{
		n = n * -1;
		str[i] = '-';
	}

