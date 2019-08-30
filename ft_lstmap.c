/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 16:25:56 by jphasha           #+#    #+#             */
/*   Updated: 2019/08/30 16:30:57 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*map_lnk = NULL;
	t_list	*map_lnk_i = NULL;

	if (!lst || !f)
		return (NULL);
	map_lnk_i = f(lst);
	map_lnk = map_lnk_i;
	while (lst->next)
	{
		lst = lst->next;
		if (!(map_lnk_i->next = f(lst)))
		{
			free(map_lnk_i->next);
			return (NULL);
		}
		map_lnk_i = map_lnk_i->next;
	}
	return (map_lnk);
}
