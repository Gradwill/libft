/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 07:32:59 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/27 10:45:37 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t id;
	size_t is;
	size_t tlen;
	size_t an;

	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	else
		tlen = ft_strlen(src) + ft_strlen(dst);
	an = dstsize - ft_strlen(dst) - 1;
	id = 0;
	while (dst[id])
		id++;
	is = 0;
	while (is < an && src[is])
		dst[id++] = src[is++];
	dst[id] = '\0';
	return (tlen);
}
