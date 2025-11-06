/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 23:03:59 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:39:52 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	while (src[i])
		i++;
	src_len = i;
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/* int	main(void){
	char	src[] = "Hello 42";
	char	dest[20];
	size_t	ret;

	ret = ft_strlcpy(dest, src, sizeof(dest));

	printf("Source: %s\n", src);
	printf("Dest: %s\n", dest);
	printf("Returned length: %zu\n", ret);
	
	// test with buffer smaller than src
	char	small_dest[5];
	ret = ft_strlcpy(small_dest, src, sizeof(small_dest));
	printf("\nWith small buffer:\n");
	printf("Destination: %s\n", small_dest);
	printf("Returned length: %zu\n", ret);
	return (0);
} */
