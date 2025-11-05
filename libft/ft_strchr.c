/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:45:09 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/05 00:19:28 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

/* int	main(void){
	const char *s = "Hello 42";
	int c = 'o';
	char *result;

	result = ft_strchr(s, c);
	if (result == NULL)
		printf("didn't find '%c' in \"%s\"\n", (char)c, s);
	else
		printf("found '%c' in \"%s\" at position %ld\n", (char)c, s, result - s);
	return (0);
}
 */