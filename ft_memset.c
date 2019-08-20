/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:38:20 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/27 10:15:09 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memset(void *s, int c, size_t n)
{
	char	*sp;
	size_t	i;

	sp = (char *)s;
	i = 0;
	while (i < n)
	{
		sp[i++] = c;
	}
	return (s);
}
