/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:49:37 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/27 18:49:24 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	while (s[i])
	{
		if (s[i] == c)
		{
			words++;
			i++;
		}
		else
			i++;
	}
	words += 1;
	return (words);
}

static char	*word_split(const char *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	word = (char *) malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		v;
	char	**words;

	i = 0;
	v = 0;
	words = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!words || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			words[v] = word_split(&s[i], c);
			while (s[i] != c && s[i])
				i++;
			v++;
		}
		else
			i++;
	}
	words[v] = 0;
	return (words);
}

int	main(void){
	
}
