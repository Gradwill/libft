/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:58:34 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/24 12:19:35 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dup;

	if (!(dup = (char *)malloc(ft_strlen(s1) + 1)))
		return (NULL);
	i = 0;
	while ((dup[i] = s1[i]))
		i++;
	return (dup);
}
