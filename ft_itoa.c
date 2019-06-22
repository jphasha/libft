/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 08:10:48 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/22 11:38:15 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_num_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
	{
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
	if (!(str = ft_strnew(numlen)))
	{
		return (NULL);
	}
	str[numlen--] = nbr % 10 + '0';
	while (nbr /= 10)
	{
		str[numlen--] = nbr % 10 + '0';
	}
	if (n < 0)
	{
		str[0] = '-';
	}
	return (str);
}
