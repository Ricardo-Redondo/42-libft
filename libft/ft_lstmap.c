/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:06:49 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/07 14:53:09 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*node;
	void	*content;

	if (!lst || !f)
		return (NULL);
	nlst = NULL;
	node = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, node);
		lst = lst->next;
	}
	return (nlst);
}
/* static void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

static void *to_upper_dup(void *content)
{
    char *s = (char *)content;
    size_t len = strlen(s);
    char *res = malloc(len + 1);
    if (!res)
        return (NULL);
    for (size_t i = 0; i < len; ++i)
        res[i] = ft_toupper((unsigned char)s[i]);
    res[len] = '\0';
    return (res);
}

static void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lst = NULL;
    t_list *mapped = NULL;

    ft_lstadd_back(&lst, ft_lstnew(strdup("one")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("two")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("three")));

    printf("Original list:\n");
    print_list(lst);

    mapped = ft_lstmap(lst, to_upper_dup, del);
    if (!mapped)
    {
        dprintf(2, "ft_lstmap failed\n");
        ft_lstclear(&lst, del);
        return (1);
    }

    printf("Mapped list:\n");
    print_list(mapped);

    ft_lstclear(&lst, del);
    ft_lstclear(&mapped, del);
    return (0);
}
 */