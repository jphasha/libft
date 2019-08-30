/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 16:25:56 by jphasha           #+#    #+#             */
/*   Updated: 2019/08/30 13:52:28 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map_lnk = NULL;
	t_list	*map_lnk_i = NULL;

	if (!lst || !f)
		return (NULL);
	map_lnk_i = lst;
	while (map_lnk)
	{
		map_lnk = f(map_lnk_i);
		map_lnk_i = map_lnk_i->next;
	}
	free(map_lnk_i);
	return (map_lnk);
}
