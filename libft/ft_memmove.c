/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:37:12 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/07 14:53:34 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destp;
	const char	*srcp;

	destp = dest;
	srcp = src;
	if (destp < srcp)
	{
		while (n--)
			*destp++ = *srcp++;
	}
	else
	{
		destp += n;
		srcp += n;
		while (n--)
			*(--destp) = *(--srcp);
	}
	return (dest);
}

/* int	main(void)
{
	char str[] = "123456789";
	size_t n = 5;

	printf("Before: %s\n", str);
	ft_memmove(str + 2, str, n);
	printf("After: %s\n", str);
	return(0);
}
 */