/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:51:44 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/14 15:01:37 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ps1;
	char	*ps2;
	char	*dest;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	ps1 = s1;
	ps2 = s2;
	dest = (char *)malloc(sizeof(char *) * (*s1 - 1) + sizeof(char *) * *s2);
	if (!dest)
		return (NULL);
	i = ft_strlen(dest);
	while (ps1++)
		*dest++ = *ps1++;
	while (ps2++)
		*dest++ = *ps2++;
	dest[i] = '\0';
	return (dest);
}
