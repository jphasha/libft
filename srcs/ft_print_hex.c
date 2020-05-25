/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 12:34:39 by jphasha           #+#    #+#             */
/*   Updated: 2019/08/17 12:41:06 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print_hex(int n)
{
	char	*str;

	str = "0123456789abcdef";
	if (n == 0)
		ft_putchar('0');
	while (n)
	{
		ft_putchar(str[n % 16]);
		n /= 16;
	}
}