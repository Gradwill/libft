/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:13:55 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/27 10:49:18 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	if (c == '\0')
		return ((char *)(s + len));
	else
		while (len--)
			if (*(s + len) == c)
				return ((char *)(s + len));
	return (NULL);
}
