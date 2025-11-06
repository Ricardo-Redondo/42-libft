/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:06:52 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:10:38 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* static	void	f(void *content)
{
	 char *str = (char *)content;
    while (*str)
    {
        *str = ft_toupper(*str);
        str++;
    }
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

int	main(void){
	t_list *lst = NULL;
	t_list *tmp;

	char *s1 = strdup("one");
	char *s2 = strdup("two");
	char *s3 = strdup("three");

	ft_lstadd_back(&lst, ft_lstnew(s1));
	ft_lstadd_back(&lst, ft_lstnew(s2));
	ft_lstadd_back(&lst, ft_lstnew(s3));

	printf("Before applying funcion:\n");
	print_list(lst);

	ft_lstiter(lst, f);

	printf("After applying funtion:\n");
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