/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:43:51 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:15:30 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*destp;
	unsigned char	*srcp;

	if (!dst && !src)
		return (dst);
	destp = (unsigned char *)dst;
	srcp = (unsigned char *)src;
	while (n--)
	{
		*destp++ = *srcp++;
	}
	return (dst);
}

/* int	main(void){
	const char	*src = "hello";
	const char	*dest;
	size_t n;

	n = ft_strlen(src);
	dest = malloc(sizeof(char) * ft_strlen(src));
	printf("%i", ft_memcmp(dest, src, n));
}
 */