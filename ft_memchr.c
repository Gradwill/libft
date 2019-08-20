/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:32:18 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/04 12:53:45 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cp;
	size_t			i;

	i = 0;
	cp = (unsigned char *)s;
	while (i < n)
	{
		if (*cp == (unsigned char)c)
			return (cp);
		cp++;
		i++;
	}
	return (NULL);
}
