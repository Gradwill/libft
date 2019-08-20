/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:03:02 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/29 15:28:23 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int nb;
	int sign;
	int i;

	i = 0;
	if (ft_strlen(str) >= 19 &&
		(ft_strcmp("9223372036854775807", str) <= 0))
		return (-1);
	else if (ft_strlen(str) >= 20 &&
		(ft_strcmp("-9223372036854775808", str) <= 0))
		return (0);
	while (ft_isspace(str[i]))
		i++;
	sign = 1;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	nb = 0;
	while (ft_isdigit(str[i]))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}
