/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 08:10:48 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/24 17:08:34 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(int n)
{
	size_t		i;

	i = 0;
	if (n < 0)
	{
		n = n * -1
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char		*str;
	size_t		numlen;
	size_t		nbr;

	numlen = ft_num_len(n);
	nbr = n;

	if (n < 0)
	{
		nbr = -n;
		numlen++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (numlen + 1))))
	{
		return (NULL);
	}
	i = numlen + 1;
	str[i] = '\0';
	while (nbr > 0 && i >= 0)
	{
		i--;
		str[i] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}
