/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:39:46 by gngobeni          #+#    #+#             */
/*   Updated: 2019/07/04 09:21:59 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (s && (subs = (char *)malloc(sizeof(char) * (len + 1))))
	{
		i = 0;
		while (s[start] && i < len)
			subs[i++] = s[start++];
		subs[i] = '\0';
		return (subs);
	}
	else
		return (NULL);
}
