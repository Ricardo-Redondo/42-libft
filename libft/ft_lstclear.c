/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:18:00 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/24 13:24:10 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *pos;
	t_list *next;

	if (!lst || !del)
		return ;
	pos = *lst;
	while (pos != NULL)
	{
		next = pos->next;
		del(pos->content);
		free(pos);
		lst = next;
	}
	*lst = NULL;
}
