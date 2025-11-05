/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:02:45 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/04 23:24:20 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count += 1;
		lst = lst->next;
	}
	return (count);
}

/* int	main(void){
	t_list *lst = NULL;
	int count;

    ft_lstadd_back(&lst, ft_lstnew(strdup("one")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("two")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("three")));
	count = ft_lstsize(lst);
	printf("the list has %i nodes", count);
}
 */