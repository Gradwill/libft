/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:03:17 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/24 08:07:55 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *n1;
	unsigned char *n2;

	n1 = (unsigned char *)s1;
	n2 = (unsigned char *)s2;
	while (*n1 == *n2 && *n1)
	{
		n1++;
		n2++;
	}
	if ((*n1 - *n2) < 0)
		return (-1);
	else if ((*n1 - *n2) > 0)
		return (1);
	else
		return (0);
}
