/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 12:36:25 by gngobeni          #+#    #+#             */
/*   Updated: 2019/07/09 16:48:17 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_puthex(int dec)
{
	char *hc;

	hc = "0123456789abcdef";
	if (dec)
	{
		if (dec / 16)
			ft_puthex(dec / 16);
		ft_putchar(hc[dec % 16]);
	}
	else if (dec == 0)
		ft_putchar('0');
}
