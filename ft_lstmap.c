/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gngobeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 09:51:52 by gngobeni          #+#    #+#             */
/*   Updated: 2019/06/04 12:25:34 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *tail;
	t_list *temp;

	if (lst)
	{
		temp = f(lst);
		head = ft_lstnew(temp->content, temp->content_size);
		tail = head;
		while ((lst = lst->next))
		{
			temp = f(lst);
			tail->next = ft_lstnew(temp->content, temp->content_size);
			tail = tail->next;
		}
		return (head);
	}
	return (NULL);
}
