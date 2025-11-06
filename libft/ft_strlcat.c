/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:50:38 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:39:26 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_length;
	size_t	src_length;
	size_t	sum;

	i = 0;
	sum = 0;
	dest_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	if (size > dest_length)
		sum = dest_length + src_length;
	else
		return (src_length + size);
	while (src[i] && (dest_length + 1) < size)
		dst[dest_length++] = src[i++];
	dst[dest_length] = '\0';
	return (sum);
}

/* int	main(void){
	char buffer[20] = "Hello";
	const char *to_add = " World!";
	size_t result;

	result = ft_strlcat(buffer, to_add, sizeof(buffer));
	printf("Final result: \"%s\"\n", buffer);
	printf("Total filed space: %zu\n", result);
	return (0);
} */