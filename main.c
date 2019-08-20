/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 13:19:38 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/24 12:07:10 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

char		f(char c)
{
	return (ft_toupper(c));
}

int			main(int argc, char **argv)
{
	int fd = open(argv[1], O_WRONLY | O_APPEND | O_CREAT);
	
	if (argc > 2)
	{
		for (int i = 2; i < argc; i++)
		{
			ft_putnbr_fd(ft_atoi(argv[i]), fd);
			write(fd, " ", 1);
			ft_putstr_fd(ft_itoa(ft_atoi(argv[i])), fd);
			write(fd, "\n", 1);
		}
	}
	close(fd);
	return (0);
}

