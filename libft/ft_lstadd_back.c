/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:01:24 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/28 15:45:47 by rsao-pay         ###   ########.fr       */
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

int	main(void){
	//1st node = NULL to test function
	t_list *lst = NULL;
	//creating nodes
	t_list *n1 = ft_lstnew("hello");
	t_list *n2 = ft_lstnew("world");
	t_list *n3 = ft_lstnew("!");
	//testing
	ft_lstadd_back(&lst, n1);
	ft_lstadd_back(&lst, n2);
	ft_lstadd_back(&lst, n3);
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
