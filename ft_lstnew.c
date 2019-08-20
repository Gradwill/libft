/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 08:49:53 by gngobeni          #+#    #+#             */
/*   Updated: 2019/05/31 08:50:58 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlsp;

	if ((newlsp = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlsp->content = NULL;
		newlsp->content_size = 0;
		newlsp->next = NULL;
		return (newlsp);
	}
	else
	{
		if ((newlsp->content = ft_memalloc(content_size)) != NULL)
		{
			newlsp->content = ft_memcpy(newlsp->content, content, content_size);
			newlsp->content_size = content_size;
			newlsp->next = NULL;
			return (newlsp);
		}
		else
			return (NULL);
	}
}
