/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:06:46 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/15 14:50:55 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Itère sur la liste ’lst’ et applique la fonction ’f’ au contenu de chaque
** élément. Crée une nouvelle liste résultant des applications successives de
** ’f’. La fonction ’del’ est là pour détruire le contenu d’un élément si
** nécessaire.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*head;
	t_list	*new;

	head = lst;
	new = NULL;
	while (head)
	{
		tmp = ft_lstnew((f)((void *)head->content));
		if (!tmp)
		{
			ft_lstclear(&new, del);
			break ;
		}
		head = head->next;
		ft_lstadd_back(&new, tmp);
	}
	return (new);
}
