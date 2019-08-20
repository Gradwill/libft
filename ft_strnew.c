/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:01:25 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/23 13:11:09 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*new;
	size_t	i;

	if (!(new = (char *)malloc(size + 1)))
		return (NULL);
	i = 0;
	while (i < (size + 1))
		new[i++] = '\0';
	return (new);
}
