/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:26:53 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:17:33 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}

/* int main(void)
{
	const char	s[] = "hello";
	int			c = 'e';
	size_t		n = 3;
	void		*result = ft_memchr(s, c, n);

	if (!result)
		printf("Character '%c' not found in first %zu bytes\n", c, n);
	else
	{
		printf("Found '%c' at position %ld\n", c, (char *)result - s);
		printf("Substring from match: \"%s\"\n", (char *)result);
	}
} */
