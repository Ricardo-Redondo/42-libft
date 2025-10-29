/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:10:30 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/29 14:42:34 by rsao-pay         ###   ########.fr       */
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

int main(void)
{
	t_list *list = NULL;

	/* create nodes but keep pointers so we can demonstrate deleting specific nodes */
	t_list *n1 = ft_lstnew(strdup("one"));
	t_list *n2 = ft_lstnew(strdup("two"));
	t_list *n3 = ft_lstnew(strdup("three"));

	ft_lstadd_back(&list, n1);
	ft_lstadd_back(&list, n2);
	ft_lstadd_back(&list, n3);

	printf("Initial list:\n");
	print_list(list);           // one -> two -> three -> NULL

	/* ----- Example 1: delete the head node ----- */
	{
		t_list *tmp = list;     // node to delete (head)
		list = list->next;      // unlink head from list
		ft_lstdelone(tmp, del); // deletes content and frees node
	}
	printf("\nAfter deleting head (\"one\"):\n");
	print_list(list);           // two -> three -> NULL

	/* ----- Example 2: delete middle node (\"two\") ----- */
	{
		/* unlink n2 (current head) from list: */
		t_list *prev = NULL;
		t_list *cur = list;
		/* find prev of node with content "two" (simple search) */
		while (cur && cur != n2)
		{
			prev = cur;
			cur = cur->next;
		}
		if (cur == n2)
		{
			/* unlink: prev might be NULL if cur == list, but here prev == NULL if n2 is head */
			if (prev)
				prev->next = cur->next;
			else
				list = cur->next;
			ft_lstdelone(cur, del);
		}
	}

	printf("\nAfter deleting middle node (\"two\"):\n");
	print_list(list);           // three -> NULL

	/* cleanup remaining nodes */
	ft_lstclear(&list, del);
	if (list == NULL)
		printf("\nAll nodes freed. list == NULL\n");
	return 0;
}
