/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 08:59:24 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/24 08:50:36 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static size_t	wordcount(char const *s, char c)
{
	size_t count;
	size_t i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static size_t	sstrlen(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void		*mallocate(char const *s, char c)
{
	return (malloc(sizeof(char *) * (wordcount(s, c) + 1)));
}

char			**ft_strsplit(char const *s, char c)
{
	char	**words;
	size_t	in;
	size_t	i;
	size_t	count;

	if (!s || !(words = (char **)mallocate(s, c)))
		return (NULL);
	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			words[count] = ft_strnew(sstrlen(&s[i], c) + 1);
			in = 0;
			while (s[i] && s[i] != c)
				words[count][in++] = s[i++];
			count++;
		}
	}
	words[count] = NULL;
	return (words);
}
