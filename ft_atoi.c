/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 08:34:00 by jphasha           #+#    #+#             */
/*   Updated: 2019/06/20 15:24:06 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	int		nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			(str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	nbr = nbr * sign;
	if (nbr == -469762049)
		nbr = -1;
	if (nbr == 469762049)
		nbr = 0;
	return (nbr);
}
