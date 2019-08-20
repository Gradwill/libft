/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 14:10:23 by gngobeni          #+#    #+#             */
/*   Updated: 2019/07/04 09:21:48 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*cons;
	size_t	i;
	size_t	tlen;

	if (!s1 || !s2 ||
		!(cons = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = 0;
	tlen = 0;
	while (s1[i])
		cons[tlen++] = s1[i++];
	i = 0;
	while (s2[i])
		cons[tlen++] = s2[i++];
	cons[tlen] = '\0';
	return (cons);
}
