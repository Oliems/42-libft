/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarberi <mbarberi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:06:29 by mbarberi          #+#    #+#             */
/*   Updated: 2022/11/15 12:50:07 by mbarberi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Ajoute l’élément ’new’ à la fin de la liste. */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *p;

	p = ft_lstlast(*lst);
	if (p)
	{
		p->next = new;
		return;
	}
	lst[0] = new;
}
