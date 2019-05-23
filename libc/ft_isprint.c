/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 14:05:40 by jphasha           #+#    #+#             */
/*   Updated: 2019/05/23 14:07:49 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(unsigned char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}