/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:45:38 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:12:58 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* int	main(void)
{
	char	*text = "hello linked world";
	t_list	*node;
	node = ft_lstnew(text);
	if (!node)
	{
		dprintf(2, "malloc failed\n");
		return (1);
	}
	printf("node content: %s\n", (char *)node->content);
	printf("next node: %p\n", (void *)node->next);
	free(node);
	return (0);
} */