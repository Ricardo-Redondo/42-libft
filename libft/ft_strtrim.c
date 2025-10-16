/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:10:28 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/14 18:48:04 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len_start;
	size_t	len_end;
	size_t	i;
	size_t	j;

	len_start = ft_strlen(s1);
	i = 0;
	while (s1[i] && is_set(s1[i], set))
		i++;
	j = len_start - 1;
	while (i < j && is_set(s1[j], set))
		j--;
	len_end = j - i;
	trim = (char *)malloc(sizeof(char) * (len_end + 2));
	if (!trim)
		return (NULL);
	ft_memcpy(trim, s1 + i, len_end + 1);
	trim[len_end + 1] = '\0';
	return (trim);
}
