/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:02:40 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/10 13:26:05 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*desp;
	unsigned char	*srcp;
	size_t			i;

	desp = (unsigned char *)dest;
	srcp = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		desp[i] = srcp[i];
		if (srcp[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
