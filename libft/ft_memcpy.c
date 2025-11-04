/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:43:51 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/29 23:54:57 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destp;
	unsigned char	*srcp;

	if (!dest && !src)
		return (NULL);
	destp = (unsigned char *)dest;
	srcp = (unsigned char *)src;
	while (n--)
	{
		*destp++ = *srcp++;
	}
	return (dest);
}

int	main(void){
	
}
