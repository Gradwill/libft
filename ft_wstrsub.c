/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:39:46 by gngobeni          #+#    #+#             */
/*   Updated: 2019/07/09 10:51:56 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

wchar_t		*ft_wstrsub(wchar_t const *ws, unsigned int start, size_t len)
{
	wchar_t	*subs;
	size_t	i;

	if (ws && (subs = (wchar_t *)malloc(sizeof(wchar_t) * (len + 1))))
	{
		i = 0;
		while (ws[start] && i < len)
			subs[i++] = ws[start++];
		subs[i] = '\0';
		return (subs);
	}
	else
		return (NULL);
}
