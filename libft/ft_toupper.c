/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:06:22 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/05 00:46:17 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/* int	main(void)
{
	char	c1 = 'A';
	char	c2 = 'z';
	char	c3 = '4';

	printf("Original: %c → Lowercase: %c\n", c1, ft_tolower(c1));
	printf("Original: %c → Lowercase: %c\n", c2, ft_tolower(c2));
	printf("Original: %c → Lowercase: %c\n", c3, ft_tolower(c3));
	return (0);
} */