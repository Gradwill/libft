/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:22:46 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/24 08:39:37 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	spaces(char const *s)
{
	size_t no;
	size_t i;

	no = 0;
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		no++;
		i++;
	}
	i = ft_strlen(s);
	if (i == no)
		return (no);
	else
		i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		no++;
		i--;
	}
	return (no);
}

char			*ft_strtrim(char const *s)
{
	char	*st;
	size_t	sp;
	size_t	tlen;
	size_t	i;
	size_t	c;

	if (!s)
		return (NULL);
	sp = spaces(s);
	tlen = ft_strlen(s) - sp;
	if (!(st = (char *)malloc(tlen + 1)))
		return (NULL);
	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	c = 0;
	while (c < tlen)
	{
		st[c] = s[i];
		i++;
		c++;
	}
	st[c] = '\0';
	return (st);
}
