/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrsplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:59:32 by event             #+#    #+#             */
/*   Updated: 2019/06/04 12:26:39 by gngobeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstrsplit(char const *s, char c)
{
	char	**sstr;
	size_t	i;
	t_list	*list;

	if (s == NULL)
		return (NULL);
	sstr = ft_strsplit(s, c);
	i = 0;
	while (sstr[i])
		i++;
	i--;
	list = ft_lstnew(sstr[i], (ft_strlen(sstr[i]) + 1));
	while (i-- > 0)
		ft_lstadd(&list, ft_lstnew(sstr[i], (ft_strlen(sstr[i]) + 1)));
	return (list);
}
