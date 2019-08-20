/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 16:17:56 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/28 14:49:20 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	size_t i1;
	size_t i2;

	i1 = 0;
	while (*(s1 + i1))
		i1++;
	i2 = 0;
	while ((*(s1 + i1) = *(s2 + i2)))
	{
		i1++;
		i2++;
	}
	return (s1);
}