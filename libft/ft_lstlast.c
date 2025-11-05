/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:57:52 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/04 23:29:10 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/* static	void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void){
	t_list *lst = NULL;
	t_list *last;
	t_list *tmp;
	// Create strings to set as nodes
	char *s1 = strdup("one");
	char *s2 = strdup("two");
	char *s3 = strdup("three");

	// Create nodes and add them
	ft_lstadd_back(&lst, ft_lstnew(s1));
	ft_lstadd_back(&lst, ft_lstnew(s2));
	ft_lstadd_back(&lst, ft_lstnew(s3));

	printf("Before applying funcion:\n");
	print_list(lst);

	last = ft_lstlast(lst);

	printf("last node: %s\n", (char *)last->content);
	while (lst)
    {
        tmp = lst->next;
        free(lst->content);
        free(lst);
        lst = tmp;
    }
	return (0);
}
 */