/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:19:13 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:01:44 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *) s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/* int	main(void){
	char str[10] = "abcdefghi";
    printf("Before: %s\n", str);
    ft_bzero(str, 5);
    printf("After: ");
    for (int i = 0; i < 9; i++)
        printf("%d ", str[i]);
    printf("\n");
    return (0);
} */
