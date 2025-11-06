/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:28:49 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/11/06 15:46:59 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	substr_len;

	if (!s)
		return (NULL);
	substr_len = ft_strlen(s);
	if (substr_len < start)
	{
		substr = (char *)malloc(sizeof(char *) * 1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > substr_len - start)
		len = substr_len - start;
	substr = (char *)malloc(sizeof(char *) * (len + 1));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

/* int	main(void)
{
	const char	*str = "Hello 42 Lisboa!";
	char		*sub;

	sub = ft_substr(str, 6, 2);
	if (!sub)
		dprintf(2, "Memory allocation failed.\n");
	else
	{
		printf("Original: \"%s\"\n", str);
		printf("Substring: \"%s\"\n", sub);
		free(sub);
	}
	return (0);
} */