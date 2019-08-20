/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 14:40:02 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/29 15:12:36 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dsp;
	char	*srp;
	size_t	i;

	if (src == dst)
		return (dst);
	dsp = (char *)dst;
	srp = (char *)src;
	if (src < dst)
	{
		i = len;
		while (i-- > 0)
			dsp[i] = srp[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dsp[i] = srp[i];
			i++;
		}
	}
	return (dst);
}
