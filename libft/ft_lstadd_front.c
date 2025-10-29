/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:53:51 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/29 10:46:55 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL || new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

int	main(void){
	t_list *lst = NULL;
	//creating nodes
	t_list *n1 = ft_lstnew("hello");
	t_list *n2 = ft_lstnew("world");
	t_list *n3 = ft_lstnew("!");
	//testing
	ft_lstadd_front(&lst, n1);
	ft_lstadd_front(&lst, n2);
	ft_lstadd_front(&lst, n3);
	//print the lst
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
	//free the list
	free(n1);
	free(n2);
	free(n3);
	return (0);
}
