/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digscount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 16:31:11 by gngobeni          #+#    #+#             */
/*   Updated: 2019/07/10 11:10:06 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_udigscount(unsigned int num)
{
	int count;

	count = 1;
	while ((num /= 10))
		count++;
	return (count);
}
