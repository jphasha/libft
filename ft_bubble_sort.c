/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:30:51 by jphasha           #+#    #+#             */
/*   Updated: 2019/07/12 19:07:39 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bubble_sort(int num_arr[], int num_elm)
{
	int i;
	int swpr;
	int swapped;

	i = 0;
	while ((i < num_elm - 1))
	{
		swapped = 0;
		if (num_arr[i] > num_arr[i + 1])
		{
			swpr = num_arr[i];
			num_arr[i] = num_arr[i + 1];
			num_arr[i + 1] = swpr;
			swapped = 1;
		}
		i++;
		if (swapped == 1)
		{
			i = 0;
		}
	}
}
