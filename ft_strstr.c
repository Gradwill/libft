/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:57:08 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/27 10:49:46 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i1;
	size_t	i2;
	char	*sp;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i1 = 0;
	i2 = 0;
	while (haystack[i1])
	{
		if (haystack[i1] == needle[i2])
		{
			sp = (char *)&haystack[i1];
			while (haystack[i1 + i2] == needle[i2])
			{
				if (needle[i2 + 1] == '\0')
					return (sp);
				i2++;
			}
			i2 = 0;
		}
		i1++;
	}
	return (NULL);
}
