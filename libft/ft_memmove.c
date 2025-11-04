/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:37:12 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/04 20:12:14 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destp;
	const char	*srcp;

	if (!dest && !src)
		return (NULL);
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

int	main(void){

}
