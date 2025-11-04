/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:45:38 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/04 11:00:00 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return NULL;
	node->content = content;
	node->next = NULL;
	return (node);
}

int	main(void){
	char *content = "Hello World";
	t_list *node = ft_lstnew(content);

	printf("%s", (char *)node->content);
}
