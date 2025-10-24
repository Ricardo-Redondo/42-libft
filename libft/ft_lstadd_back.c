/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:01:24 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/24 13:08:10 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *pos;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		pos = ft_lstlast(*lst);
		pos->next = new;
	}
}
