/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:06:39 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/15 16:56:51 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Libère la mémoire de l’élément passé en argument en utilisant la fonction
** ’del’ puis avec free(3). La mémoire de ’next’ ne doit pas être free.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return;
	(del)((void *) (lst->content));
	free(lst);
}
