/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 00:41:06 by jphasha           #+#    #+#             */
/*   Updated: 2019/07/13 02:08:48 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_link;
	if ((new_link = (t_list *)malloc(sizeof(*new_link) * content_size)) == NULL)
	{
		return (NULL);
	}
	if (content == NULL)
	{
		new_link->content = NULL;
		new_link->content_size = 0;
	}
	new_link->new = NULL;
	return (new_link);
}
