/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:18:00 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/29 10:40:50 by rsao-pay         ###   ########.fr       */
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
		pos = next;
	}
	*lst = NULL;
}
static	void	del(void *content)
{
	free(content);
}

static	void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list *lst = NULL;

	// Create strings to set as nodes
	char *s1 = strdup("one");
	char *s2 = strdup("two");
	char *s3 = strdup("three");

	// Create nodes and add them
	ft_lstadd_back(&lst, ft_lstnew(s1));
	ft_lstadd_back(&lst, ft_lstnew(s2));
	ft_lstadd_back(&lst, ft_lstnew(s3));

	printf("Before clear:\n");
	print_list(lst);

	// Clear the list
	ft_lstclear(&lst, del);

	printf("After clear:\n");
	if (lst == NULL)
		printf("List is NULL\n");
	else
		print_list(lst);
	return (0);
}
