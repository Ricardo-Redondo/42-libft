/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:10:30 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/04 23:23:45 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}

/* static	void	del(void *content)
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

int main(void)
{
	t_list *list = NULL;
	t_list *n = ft_lstnew(strdup("one"));

	ft_lstadd_back(&list, n);

	printf("Initial list:\n");
	print_list(list);

	t_list *tmp = list;
	list = list->next;
	ft_lstdelone(tmp, del);

	printf("After deleting node:\n");
	print_list(list);

	if (list == NULL)
		printf("list == NULL\n");
	return (0);
}
 */