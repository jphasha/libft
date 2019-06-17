/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 08:10:48 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/17 09:28:46 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char		*str;
	size_t		i;
	size_t		numlen;

	numlen = ft_strlen(ft_atoi(n));
	str = (char *)malloc(sizeof(char) * (numlen + 1));
	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	if (n < 0)
	{
		n = n * -1;
		str[i] = '-';
	}
	if (n == 0)
	{
		str[i] = '0';
	}
	if (numlen > 0)
	{
		i = numlen;
	}
	while (n > 0)
	{
		str[i] = '\0';
		i--;
		str[i] = '0' + (n % 10);
		n = n / 10;
	}
	return (str);
}
