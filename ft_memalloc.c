/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:25:00 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/23 13:08:03 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char	*mem;
	size_t	i;

	if ((mem = (char *)malloc(size)))
	{
		i = 0;
		while (i < size)
			*(mem + i++) = 0;
		return (mem);
	}
	else
		return (NULL);
}
