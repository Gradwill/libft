/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:03:17 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/10 13:29:28 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*n1;
	unsigned char	*n2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	n1 = (unsigned char *)s1;
	n2 = (unsigned char *)s2;
	while (n1[i] == n2[i] && n1[i] && i < (n - 1))
	{
		i++;
	}
	if ((n1[i] - n2[i]) < 0)
		return (-1);
	else if ((n1[i] - n2[i]) > 0)
		return (1);
	else
		return (0);
}
