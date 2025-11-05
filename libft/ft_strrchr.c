/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 23:44:45 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/05 00:42:59 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = NULL;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			a = ((char *)s);
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		return ((char *)s);
	return (a);
}

/* int	main(void)
{
	const char	*str = "Hello 42 Lisboa 42!";
	int			ch = '4';
	char		*result;

	result = ft_strrchr(str, ch);
	if (result)
		printf("Last occurrence of '%c' in \"%s\" → \"%s\"\n", ch, str, result);
	else
		printf("Character '%c' not found in \"%s\"\n", ch, str);
	return (0);
} */