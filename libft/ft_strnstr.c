/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 23:10:58 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:45:42 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (i + j < len && little[j] && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char	*big = "Hello 42 Lisboa!";
	const char	*little = "42";
	size_t		len = 10;
	char		*result;

	result = ft_strnstr(big, little, len);
	if (result)
		printf("Found '%s' in '%s' → \"%s\"\n", little, big, result);
	else
		printf("'%s' not found in %zu chars of '%s'\n", little, len, big);
	return (0);
} */