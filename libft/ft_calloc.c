/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:17:33 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/07 14:49:14 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*p;

	if (!nmeb || !size)
		return (NULL);
	if (nmeb * size > INT_MAX)
		return (NULL);
	p = malloc(nmeb * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, nmeb * size);
	return (p);
}

/* int	main(void){
	size_t nmeb = 5;
	size_t size = sizeof(int);
	int *arr;
	arr = ft_calloc(nmeb, size);
	if (!arr)
		return (1);
	for (size_t i = 0; i < num; i++)
    	printf("%d ", arr[i]);
	printf("\n");
	free(arr);
	return (0);
} */
