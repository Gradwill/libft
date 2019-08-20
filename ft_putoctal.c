/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 12:36:25 by gngobeni          #+#    #+#             */
/*   Updated: 2019/07/09 13:29:29 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putoctal(int dec)
{
	if (dec)
	{
		if (dec / 8)
			ft_putoctal(dec / 8);
		ft_putchar('0' + (dec % 8));
	}
	else if (dec == 0)
		ft_putchar('0');
}