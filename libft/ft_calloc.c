/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:17:33 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/28 12:00:48 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*p;

	p = malloc(nmeb * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, nmeb * size);
	return (p);
}

int	main(void){
	size_t nmeb = 5;
	size_t size = 3;
	int *arr;
	arr = ft_calloc(nmeb, size);
	if (!arr)
		return (1);
	for (size_t i = 0; i < nmeb * (size / sizeof(int)); i++)
    	printf("%d ", arr[i]);
	printf("\n");
	return (0);
}
