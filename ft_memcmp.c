/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:38:25 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/30 12:37:48 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cp1;
	unsigned char	*cp2;
	size_t			i;

	if (n == 0)
		return (0);
	cp1 = (unsigned char *)s1;
	cp2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*(cp1 + i) != *(cp2 + i))
			return (*(cp1 + i) - *(cp2 + i));
		i++;
	}
	i--;
	return (*(cp1 + i) - *(cp2 + i));
}
