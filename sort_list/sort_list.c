/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 12:34:04 by omaslova          #+#    #+#             */
/*   Updated: 2018/04/14 14:03:33 by omaslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*list;
	t_list	*tmp_list;
	t_list	*tmp;

	list = NULL;
	tmp = NULL;
	if (!lst || !(tmp = (t_list *)malloc(sizeof(t_list))))
		return (tmp);
	tmp_list = lst;
	while (tmp_list->next)
	{
		list = lst;
		while (list->next)
		{
			if (!(cmp(list->data, list->next->data)))
			{
				tmp->data = list->data;
				list->data = list->next->data;
				list->next->data = tmp->data;
			}
			list = list->next;
		}
		tmp_list = tmp_list->next;
	}
	return (lst);
}
