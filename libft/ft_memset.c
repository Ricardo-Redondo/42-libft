/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:59:30 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:17:24 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
		*p++ = (unsigned char) c;
	return (s);
}

/* int	main(void)
{
	char str[] = "Hello, world!";
	size_t n = 5;

	printf("Before: %s\n", str);
	ft_memset(str + 7, '*', n);
	printf("After: %s\n", str);
	return (0);
} */
