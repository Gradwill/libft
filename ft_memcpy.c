/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:35:24 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/28 08:57:17 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	if (dest == NULL && src == NULL)
		return (NULL);
	dp = (char *)dest;
	sp = (const char *)src;
	while (n--)
		*dp++ = *sp++;
	return (dest);
}
